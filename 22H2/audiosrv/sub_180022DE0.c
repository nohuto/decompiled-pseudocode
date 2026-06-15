/*
 * XREFs of sub_180022DE0 @ 0x180022DE0
 * Callers:
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     sub_180022C90 @ 0x180022C90 (sub_180022C90.c)
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_180052550 @ 0x180052550 (sub_180052550.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180022DE0(__int64 a1, _QWORD *a2, int a3)
{
  int v5; // edi
  unsigned int v6; // ecx
  __int64 v8; // r14
  __int64 i; // rdx
  __int64 *v10; // r8
  int v11; // eax
  int v12; // r9d
  __int64 v13; // r11
  __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  volatile signed __int32 *v17; // rdi

  if ( !a3 )
  {
    v5 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v5 < 0 || v5 >= *(_DWORD *)(a1 + 40) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        if ( *(_BYTE *)(*(_QWORD *)(v8 + *(_QWORD *)(a1 + 32)) + 20LL) )
        {
          v15 = (_QWORD *)sub_180023320(a1 + 32, (unsigned int)v5);
          if ( (unsigned int)sub_180022EE0(*v15, a2) != -1 )
            break;
        }
        ++v5;
        v8 += 16LL;
        if ( v5 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_3;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      v16 = (_QWORD *)sub_180023320(a1 + 32, (unsigned int)v5);
      v17 = (volatile signed __int32 *)v16[1];
      if ( v17 )
      {
        _InterlockedIncrement(v17 + 2);
        v17 = (volatile signed __int32 *)v16[1];
      }
      if ( (int)sub_180052550(*v16, a1) < 0 )
      {
        if ( v17 )
          sub_180052600((std::_Ref_count_base *)v17);
        if ( a1 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
        return 0xFFFFFFFFLL;
      }
      if ( v17 )
        sub_180052600((std::_Ref_count_base *)v17);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    }
  }
LABEL_3:
  v6 = 0;
  if ( *(int *)(a1 + 40) <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i < 0 || (signed int)v6 >= *(_DWORD *)(a1 + 40) )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v10 = *(__int64 **)(i + *(_QWORD *)(a1 + 32));
    v11 = 0;
    v12 = *((_DWORD *)v10 + 2);
    if ( v12 > 0 )
    {
      v13 = *v10;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 + 16LL * v11) - *a2;
        if ( !v14 )
          v14 = *(_QWORD *)(v13 + 16LL * v11 + 8) - a2[1];
        if ( !v14 )
          break;
        if ( ++v11 >= v12 )
          goto LABEL_24;
      }
      if ( v11 != -1 )
        break;
    }
LABEL_24:
    if ( (signed int)++v6 >= *(_DWORD *)(a1 + 40) )
      return 0xFFFFFFFFLL;
  }
  return v6;
}
