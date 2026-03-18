/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00246CC
 * Callers:
 *     xxxClientExpandStringW @ 0x1C0020288 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0022098 (xxxClientLoadStringW.c)
 *     SfnOUTSTRING @ 0x1C00B2C40 (SfnOUTSTRING.c)
 *     ClientGetListboxString @ 0x1C020576C (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C02074C0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0207A40 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     wcsncpycch @ 0x1C0024788 (wcsncpycch.c)
 *     strncpycch @ 0x1C0157AA8 (strncpycch.c)
 *     MBToWCSEx @ 0x1C024BCF4 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C024BFF4 (WCSToMBEx.c)
 */

void __fastcall CopyOutputString(struct _CALLBACKSTATUS *a1, struct _LARGE_STRING *a2, unsigned int a3, int a4)
{
  __int64 v6; // rcx
  volatile void **v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // r8
  volatile void *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r8

  v6 = *((unsigned int *)a1 + 2);
  v9 = (volatile void **)((char *)a1 + 16);
  if ( (_DWORD)v6 )
    ProbeForRead(*v9, (unsigned int)v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( *((int *)a2 + 1) >= 0 )
  {
    if ( a4 )
    {
      v12 = *(unsigned int *)a1;
      v13 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)v12 >= v13 )
        v12 = v13;
      v11 = MBToWCSEx(v6, *v9, v12, (char *)a2 + 8, a3);
      if ( v11 >= a3 )
        goto LABEL_9;
      *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v11) = 0;
    }
    else
    {
      if ( a3 < *((_DWORD *)a1 + 2) >> 1 )
        LODWORD(v10) = a3;
      else
        v10 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 1;
      v11 = wcsncpycch(*((_QWORD *)a2 + 1), *v9, (unsigned int)v10);
    }
    a3 = v11;
LABEL_9:
    a3 *= 2;
    goto LABEL_10;
  }
  v14 = *((unsigned int *)a1 + 2);
  v15 = *v9;
  if ( a4 )
  {
    if ( a3 < (unsigned int)v14 )
      v14 = a3;
    v16 = strncpycch(*((_QWORD *)a2 + 1), v15, v14);
    goto LABEL_25;
  }
  v17 = (unsigned int)v14 >> 1;
  if ( *(_DWORD *)a1 < (unsigned int)v17 )
    v17 = *(unsigned int *)a1;
  v16 = WCSToMBEx(0LL, v15, v17, (char *)a2 + 8, a3);
  if ( v16 < a3 )
  {
    *(_BYTE *)(v16 + *((_QWORD *)a2 + 1)) = 0;
LABEL_25:
    a3 = v16;
  }
LABEL_10:
  *(_DWORD *)a2 = a3;
}
