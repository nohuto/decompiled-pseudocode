unsigned __int64 __fastcall MiApplyRetpolineFixups(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int16 *a6,
        char a7)
{
  int v7; // r12d
  int v8; // edx
  BOOL v11; // r15d
  unsigned int v12; // ecx
  _DWORD *v13; // r14
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  unsigned __int64 result; // rax
  __int64 v17; // rbx
  int v18; // r10d
  unsigned int v19; // r8d
  _BYTE *v20; // rax
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned __int64 v24; // [rsp+48h] [rbp-60h]
  __int64 v25; // [rsp+58h] [rbp-50h] BYREF
  int v26; // [rsp+60h] [rbp-48h]
  __int16 v27; // [rsp+64h] [rbp-44h]

  v7 = 0;
  v8 = a5;
  v11 = (a7 & 8) == 0;
  if ( (a7 & 0x10) != 0 )
  {
    v7 = 2;
    v11 = 0;
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    v7 |= 1u;
  v12 = a6[3];
  if ( v12 >= 3 )
  {
    v22 = v12 - 3;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
          goto LABEL_6;
        RtlApplySwitchJumpRelocationToPage(a1, a4, a5, (_DWORD)Base, (__int64)(a6 + 4), v11, 1);
      }
      else
      {
        RtlApplyIndirectRelocationToPage(a1, a4, a5, (_DWORD)Base, (__int64)(a6 + 4), v11, 1);
      }
    }
    else
    {
      RtlApplyImportRelocationToPage(a1, a4, a5, (_DWORD)Base, (__int64)(a6 + 4), v11, 1, v7);
    }
    v8 = a5;
  }
LABEL_6:
  v13 = a6 + 6;
  v14 = (unsigned __int64)a6 + *a6 + 12;
  v15 = v14 + a6[1];
  result = v15 + a6[2];
  v24 = result;
  if ( (unsigned __int64)(a6 + 6) < v14 )
  {
    do
    {
      v25 = 0LL;
      v26 = 0;
      v27 = 0;
      v17 = *v13 & 0xFFF;
      RtlpConstructImportRelocationFixup(v17 + a4, v8, (_DWORD)Base, (_DWORD)v13, v11, v7, (__int64)&v25);
      v18 = (unsigned __int16)v25;
      v19 = 0;
      v20 = (_BYTE *)(v17 + a1);
      v21 = 1;
      do
      {
        if ( (unsigned __int64)v20 >= a1 )
        {
          if ( (unsigned __int64)v20 >= a1 + 4096 )
            break;
          if ( (v18 & v21) != 0 )
            *v20 = v20[(_QWORD)&v25 + -v17 - a1 + 2];
        }
        ++v19;
        v21 = __ROL4__(v21, 1);
        ++v20;
      }
      while ( v19 < 0xC );
      v8 = a5;
      ++v13;
    }
    while ( (unsigned __int64)v13 < v14 );
    result = v24;
  }
  if ( v14 < v15 )
  {
    do
    {
      RtlApplyIndirectRelocationToPage(a1, a4, a5, (_DWORD)Base, v14, v11, 0);
      v14 += 2LL;
    }
    while ( v14 < v15 );
    result = v24;
  }
  if ( v15 < result )
  {
    do
    {
      result = RtlApplySwitchJumpRelocationToPage(a1, a4, a5, (_DWORD)Base, v15, v11, 0);
      v15 += 2LL;
    }
    while ( v15 < v24 );
  }
  return result;
}
