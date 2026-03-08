/*
 * XREFs of RegisterDefaultClass @ 0x1C003124C
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C002F120 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C0030020 (NtUserRegisterClassExWOW.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C0030830 (InternalRegisterClassEx.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall RegisterDefaultClass(wchar_t *Str1)
{
  int v2; // r12d
  int v3; // r13d
  int IntegerAtom; // r8d
  unsigned int v5; // edi
  _QWORD *i; // rsi
  const wchar_t *v7; // rdx
  bool v8; // zf
  __int64 *v9; // rax
  unsigned __int16 v10; // dx
  __int16 v11; // r8
  __int64 result; // rax
  _BYTE v13[4]; // [rsp+20h] [rbp-60h] BYREF
  int v14; // [rsp+24h] [rbp-5Ch]
  __int64 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-50h]
  int v17; // [rsp+34h] [rbp-4Ch]
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+78h] [rbp-8h]
  int v27; // [rsp+7Ch] [rbp-4h]
  __int16 v28; // [rsp+C0h] [rbp+40h] BYREF
  int v29; // [rsp+C8h] [rbp+48h]

  memset_0(v13, 0, 0x60uLL);
  v2 = 1;
  v3 = *(_DWORD *)(gptiCurrent + 488LL) & 4;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v28 = 0;
    IntegerAtom = (unsigned __int8)RtlGetIntegerAtom(Str1, &v28);
    v29 = IntegerAtom;
  }
  else
  {
    IntegerAtom = 1;
    v29 = 1;
    v28 = (__int16)Str1;
  }
  v5 = 0;
  for ( i = &gDefaultServerClasses; ; i += 6 )
  {
    if ( (!v3 || (*(_DWORD *)i & 1) != 0) && ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 832LL) >> v5) & 1) == 0 )
    {
      v2 = 0;
      if ( IntegerAtom )
      {
        v8 = v28 == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)i >> 3) & 0x1F) + 868);
      }
      else
      {
        v7 = (const wchar_t *)i[5];
        if ( ((unsigned __int64)v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_8;
        v8 = _wcsicmp(Str1, v7) == 0;
      }
      if ( v8 )
        break;
    }
LABEL_8:
    if ( ++v5 >= 8 )
    {
      if ( v2 )
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x2000u;
      return 1LL;
    }
    IntegerAtom = v29;
  }
  v16 = 0;
  v18 = hModuleWin;
  v19 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v17 = 0;
  v27 = 1;
  v14 = *((_DWORD *)&gDefaultServerClasses + 12 * v5 + 2);
  v15 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 2);
  v26 = *((_DWORD *)&gDefaultServerClasses + 12 * v5 + 6);
  if ( (*((_DWORD *)&gDefaultServerClasses + 12 * v5) & 2) != 0 && (v9 = (__int64 *)gasyscur[1]) != 0LL )
    v20 = *v9;
  else
    v20 = 0LL;
  v10 = *((_WORD *)&gDefaultServerClasses + 24 * v5 + 2);
  v11 = *((_WORD *)&gDefaultServerClasses + 24 * v5 + 3) | 0x41;
  v21 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 4);
  v23 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 5);
  v25 = v23;
  result = InternalRegisterClassEx((__int64)v13, v10, v11, 0LL);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 832LL) |= 1 << v5;
    return 1LL;
  }
  return result;
}
