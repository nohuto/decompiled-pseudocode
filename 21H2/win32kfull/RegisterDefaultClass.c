/*
 * XREFs of RegisterDefaultClass @ 0x1C0061D64
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C00615D0 (NtUserRegisterClassExWOW.c)
 *     NtUserGetClassInfoEx @ 0x1C007EFD0 (NtUserGetClassInfoEx.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C005FF10 (InternalRegisterClassEx.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall RegisterDefaultClass(wchar_t *Str1)
{
  int v2; // r15d
  int IntegerAtom; // r13d
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  int v6; // r12d
  const wchar_t *v7; // rdx
  __int64 result; // rax
  bool v9; // zf
  _QWORD *v10; // rax
  __int16 v11; // dx
  unsigned int v12; // r8d
  _QWORD v13[12]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v14; // [rsp+B0h] [rbp+30h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = *(_DWORD *)(gptiCurrent + 488LL) & 4;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v14 = 0;
    IntegerAtom = (unsigned __int8)RtlGetIntegerAtom(Str1, &v14);
  }
  else
  {
    v14 = (__int16)Str1;
    IntegerAtom = 1;
  }
  v4 = 0;
  v5 = &gDefaultServerClasses;
  v6 = 1;
  while ( 1 )
  {
    if ( v2 && (*(_DWORD *)v5 & 1) == 0 || ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 840LL) >> v4) & 1) != 0 )
      goto LABEL_8;
    v6 = 0;
    if ( IntegerAtom )
      break;
    v7 = (const wchar_t *)v5[5];
    if ( ((unsigned __int64)v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v9 = _wcsicmp(Str1, v7) == 0;
      goto LABEL_13;
    }
LABEL_8:
    ++v4;
    v5 += 6;
    if ( v4 >= 8 )
    {
      if ( v6 )
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x2000u;
      return 1LL;
    }
  }
  v9 = v14 == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)v5 >> 3) & 0x1F) + 868);
LABEL_13:
  if ( !v9 )
    goto LABEL_8;
  v13[2] = 0LL;
  v13[3] = hModuleWin;
  v13[4] = 0LL;
  v13[9] = 0LL;
  v13[7] = 0LL;
  HIDWORD(v13[11]) = 1;
  HIDWORD(v13[0]) = *((_DWORD *)&gDefaultServerClasses + 12 * v4 + 2);
  v13[1] = *((_QWORD *)&gDefaultServerClasses + 6 * v4 + 2);
  LODWORD(v13[11]) = *((_DWORD *)&gDefaultServerClasses + 12 * v4 + 6);
  if ( (*((_DWORD *)&gDefaultServerClasses + 12 * v4) & 2) != 0 && (v10 = (_QWORD *)gasyscur[1]) != 0LL )
    v13[5] = *v10;
  else
    v13[5] = 0LL;
  v11 = *((_WORD *)&gDefaultServerClasses + 24 * v4 + 2);
  v12 = *((unsigned __int16 *)&gDefaultServerClasses + 24 * v4 + 3) | 0x41;
  v13[6] = *((_QWORD *)&gDefaultServerClasses + 6 * v4 + 4);
  v13[8] = *((_QWORD *)&gDefaultServerClasses + 6 * v4 + 5);
  v13[10] = v13[8];
  result = InternalRegisterClassEx((__int64)v13, v11, v12, 0LL);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 840LL) |= 1 << v4;
    return 1LL;
  }
  return result;
}
