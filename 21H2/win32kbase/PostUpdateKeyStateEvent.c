/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C0006990
 * Callers:
 *     NtUserGetKeyState @ 0x1C0006170 (NtUserGetKeyState.c)
 *     UpdateAsyncKeyState @ 0x1C004C680 (UpdateAsyncKeyState.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01B3D80 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 * Callees:
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0006A94 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0006AC0 (ProcessUpdateKeyStateEvent.c)
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x1C0006F84 (ApiSetEditionPostUpdateKeyStateEvent.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PostUpdateKeyStateEvent(__int64 a1)
{
  __int64 result; // rax
  _OWORD *v3; // rdi
  __int64 v4; // rax
  _OWORD *v5; // rsi
  _OWORD *v6; // rax
  unsigned int v7; // edx
  _DWORD *v8; // r8
  _DWORD *v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 388);
  if ( (result & 1) != 0 )
  {
    result = (__int64)gptiRit;
    if ( *(struct tagTHREADINFO **)(a1 + 96) != gptiRit )
    {
      if ( !*(_QWORD *)(a1 + 24) )
      {
        CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v10);
        v3 = (_OWORD *)(a1 + 196);
        result = ProcessUpdateKeyStateEvent(a1, &gafAsyncKeyState, a1 + 196);
LABEL_5:
        *v3 = 0LL;
        v3[1] = 0LL;
        *(_DWORD *)(a1 + 388) &= ~1u;
        return result;
      }
      v4 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v4 + 96) == 4 )
      {
        v6 = *(_OWORD **)(v4 + 32);
        v3 = (_OWORD *)(a1 + 196);
        v7 = 0;
        v8 = (_DWORD *)(a1 + 196);
        *v6 = gafAsyncKeyState;
        v9 = v6 + 4;
        v6[1] = xmmword_1C02508F0;
        v6[2] = xmmword_1C0250900;
        v6[3] = xmmword_1C0250910;
        do
        {
          ++v7;
          *v9++ |= *v8++;
        }
        while ( v7 < 8 );
        result = (__int64)qword_1C0257118;
        if ( qword_1C0257118 )
          result = qword_1C0257118(*(_QWORD *)(a1 + 96), 8256LL, v8);
        goto LABEL_5;
      }
      result = Win32AllocPool(96LL, 1936421717LL);
      v5 = (_OWORD *)result;
      if ( result )
      {
        CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v10);
        v3 = (_OWORD *)(a1 + 196);
        *v5 = gafAsyncKeyState;
        v5[1] = xmmword_1C02508F0;
        v5[2] = xmmword_1C0250900;
        v5[3] = xmmword_1C0250910;
        v5[4] = *(_OWORD *)(a1 + 196);
        v5[5] = *(_OWORD *)(a1 + 212);
        result = ApiSetEditionPostUpdateKeyStateEvent(a1, v5);
        if ( !(_DWORD)result )
          return Win32FreePool(v5);
        goto LABEL_5;
      }
    }
  }
  return result;
}
