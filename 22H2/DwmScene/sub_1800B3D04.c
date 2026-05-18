/*
 * XREFs of sub_1800B3D04 @ 0x1800B3D04
 * Callers:
 *     sub_1800B2D64 @ 0x1800B2D64 (sub_1800B2D64.c)
 * Callees:
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x18011FB68 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_DWORD *__fastcall sub_1800B3D04(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  _DWORD *result; // rax
  int v5; // ebp
  unsigned __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a4;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    JUMPOUT(0x1800B3E3ALL);
  }
  if ( !a3 || (result = (_DWORD *)(a4 & 6), (_BYTE)result == 6) )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    if ( a3 < 0x1000 )
    {
      v13 = operator new(a3);
    }
    else
    {
      v9 = a3 + 39;
      if ( a3 + 39 < a3 )
        v9 = -1LL;
      v10 = operator new(v9);
      if ( !v10 )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        __debugbreak();
      }
      v13 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v13 - 1) = v10;
    }
    result = memcpy(v13, a2, a3);
    *(_QWORD *)(a1 + 104) = (char *)v13 + a3;
    if ( (v5 & 4) == 0 )
    {
      **(_QWORD **)(a1 + 24) = v13;
      **(_QWORD **)(a1 + 56) = v13;
      result = *(_DWORD **)(a1 + 80);
      *result = a3;
    }
    if ( (v5 & 2) == 0 )
    {
      v14 = *(_QWORD **)(a1 + 104);
      v15 = v14;
      if ( (v5 & 0x18) == 0 )
        v15 = v13;
      **(_QWORD **)(a1 + 32) = v13;
      **(_QWORD **)(a1 + 64) = v15;
      result = *(_DWORD **)(a1 + 88);
      *result = (_DWORD)v14 - (_DWORD)v15;
      if ( (v5 & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v13;
        **(_QWORD **)(a1 + 56) = 0LL;
        result = *(_DWORD **)(a1 + 80);
        *result = (_DWORD)v13;
      }
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
  return result;
}
