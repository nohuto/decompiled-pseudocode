/*
 * XREFs of ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x1803D7948
 * Callers:
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x1803CDC30 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(__int64 a1, int a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned __int64 i; // r9
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *j; // rcx
  __int64 *v14; // rax
  int v16; // [rsp+78h] [rbp+10h]

  v16 = a2;
  v2 = (RTL_SRWLOCK *)(a1 + 440);
  v5 = 2;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 440));
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v8 = *((unsigned __int8 *)&v16 + i);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  v9 = *(__int64 **)(a1 + 384);
  v10 = v6 & *(_QWORD *)(a1 + 424);
  v11 = *(_QWORD *)(a1 + 400);
  v12 = 2 * v10;
  for ( j = *(__int64 **)(v11 + 8 * v12); ; j = (__int64 *)*j )
  {
    v14 = *(__int64 **)(v11 + 8 * v12) == v9 ? *(__int64 **)(a1 + 384) : **(__int64 ***)(v11 + 8 * v12 + 8);
    if ( j == v14 )
      break;
    if ( *((_DWORD *)j + 4) == a2 )
      goto LABEL_11;
  }
  j = *(__int64 **)(a1 + 384);
LABEL_11:
  if ( j != v9 && (*((_DWORD *)j + 6) == 1 || a2 == *(_DWORD *)(a1 + 612)) )
    v5 = (unsigned __int16)WORD2(j[7]) || (j[5] & 0x200000000LL) == 0;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v5;
}
