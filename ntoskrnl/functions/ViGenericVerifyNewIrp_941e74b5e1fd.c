void __fastcall ViGenericVerifyNewIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const void *a5)
{
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  char pszDest[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( (*(_QWORD *)(a2 + 72) || *(_QWORD *)(a2 + 80))
    && ((*(_DWORD *)(a2 + 16) & 0x440) == 0 || (*(_DWORD *)(a2 + 16) & 0x402) == 0) )
  {
    v7 = *(_QWORD *)(a2 + 184);
    v8 = *(char *)(a2 + 67) - 1;
    v9 = *(char *)(a2 + 66);
    if ( v8 > v9 )
    {
LABEL_8:
      v11 = *(unsigned __int8 *)(a1 + 60);
      if ( (_BYTE)v11 )
      {
        ViErrorDisplayDescription(770LL);
        if ( RtlStringCbPrintfA(
               pszDest,
               0x5BuLL,
               "CulpritAddress = %p, Irp = %p, IRQL = %u.\n",
               a5,
               (const void *)a2,
               v11) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(770LL, a5, a2, v11);
      }
    }
    else
    {
      v10 = (_QWORD *)(v7 - 16);
      while ( !*v10 )
      {
        v10 += 9;
        if ( ++v8 > v9 )
          goto LABEL_8;
      }
    }
  }
}
