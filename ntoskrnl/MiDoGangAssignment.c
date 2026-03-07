int __fastcall MiDoGangAssignment(__int64 a1, ULONG_PTR **a2)
{
  unsigned __int16 *v2; // rax
  int v4; // ecx
  ULONG_PTR *v5; // rbx
  unsigned __int16 v6; // r12
  ULONG_PTR *v7; // r14
  char *v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  int v11; // eax
  int v12; // edx
  bool v13; // zf
  SIZE_T v14; // rax
  __m128i v16[3]; // [rsp+40h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  v2 = (unsigned __int16 *)&retaddr;
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
    {
      v2 = *(unsigned __int16 **)(a1 + 168);
      v6 = *v2;
    }
    else
    {
      v6 = 0;
    }
    v7 = *a2;
    if ( (v4 & 0x38) != 0 )
    {
      v9 = 512LL;
      v8 = (char *)(*(_QWORD *)(a1 + 160) + ((*v7 - *(_QWORD *)a1) << 12));
    }
    else
    {
      v8 = 0LL;
      v9 = 0x4000LL;
    }
    while ( 1 )
    {
      v10 = v7[1];
      if ( !v10 )
        break;
      if ( v9 <= v10 )
        v10 = v9;
      if ( v8 )
      {
        v11 = *(_DWORD *)(a1 + 184);
        if ( (v11 & 8) != 0 )
        {
          KeZeroPages(v8, v10 << 12);
        }
        else if ( (v11 & 0x10) != 0 )
        {
          memset(v8, -1, v10 << 12);
        }
        else if ( (v11 & 0x20) != 0 )
        {
          v14 = RtlCompareMemoryUlong(v8, v10 << 12, 0);
          if ( v14 != v10 << 12 )
            KeBugCheckEx(0x127u, (ULONG_PTR)v8, *v7, v14, v10 << 12);
        }
      }
      LODWORD(v2) = *(_DWORD *)(a1 + 184);
      if ( ((unsigned __int8)v2 & 4) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 180);
        memset(v16, 0, sizeof(v16));
        MiCreatePfnTemplate((__int64)v16, v12, v6);
        LODWORD(v2) = MiInitializeNewPfns(
                        (__m128i *)(48 * *v7 - 0x220000000000LL),
                        v10,
                        v16,
                        v6,
                        *(_DWORD *)(a1 + 180),
                        0LL,
                        0LL);
      }
      v13 = v7[1] == v10;
      v7[1] -= v10;
      if ( v13 )
        break;
      *v7 += v10;
      LODWORD(v2) = KeShouldYieldProcessor();
      if ( (_DWORD)v2 )
        goto LABEL_5;
      if ( v8 )
        v8 += 4096 * v10;
    }
  }
  else
  {
    v5 = *a2;
    if ( **a2 )
    {
      LODWORD(v2) = MiInitializeLargeMdlLeafPfns(v5, *(_QWORD *)a1);
      if ( *v5 )
LABEL_5:
        *(_DWORD *)(a1 + 204) = 1;
    }
  }
  return (int)v2;
}
