/*
 * XREFs of ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C021CF48
 * Callers:
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021E9C0 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C0092540 (PostUpdateKeyStateEvent.c)
 */

void __fastcall ApplyFullKeyboardStates(_OWORD *a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rdi
  char *i; // rbx
  __int64 v17; // rcx
  __m128i si128; // xmm0

  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  *(_OWORD *)(v6 + 14056) = *a1;
  *(_OWORD *)(v6 + 14072) = a1[1];
  *(_OWORD *)(v6 + 14088) = a1[2];
  *(_OWORD *)(v6 + 14104) = a1[3];
  v11 = SGDGetUserSessionState(v8, v7, v9, v10);
  *(_OWORD *)(v11 + 13992) = *a2;
  *(_OWORD *)(v11 + 14008) = a2[1];
  *(_OWORD *)(v11 + 14024) = a2[2];
  *(_OWORD *)(v11 + 14040) = a2[3];
  if ( grpdeskRitInput )
  {
    v15 = (char *)grpdeskRitInput + 168;
    for ( i = (char *)*((_QWORD *)grpdeskRitInput + 21); i != v15; i = *(char **)i )
    {
      v17 = *((_QWORD *)i - 39);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(_DWORD *)(v17 + 396) |= 1u;
      *(__m128i *)(v17 + 204) = si128;
      *(__m128i *)(v17 + 220) = si128;
      PostUpdateKeyStateEvent(v17, v12, v13, v14);
    }
  }
}
