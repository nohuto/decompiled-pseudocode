/*
 * XREFs of KsepCompletionSafeWrapper @ 0x1403A0510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KsepCompletionSafeWrapper(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  void (__fastcall *v7)(_QWORD, __int64, _QWORD); // rax
  int v8; // eax
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD); // rax

  v3 = 0;
  if ( a3 )
  {
    v7 = (void (__fastcall *)(_QWORD, __int64, _QWORD))a3[1];
    if ( v7 )
      v7(*a3, a2, a3[2]);
  }
  v8 = *((_DWORD *)a3 + 10);
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( (v8 & 0x80u) != 0 )
      goto LABEL_6;
  }
  else if ( (v8 & 0x40) != 0 )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a2 + 68) && (v8 & 0x20) != 0 )
  {
LABEL_6:
    v9 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))a3[3];
    if ( v9 )
      v3 = v9(a1, a2, a3[4]);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 65) )
  {
    v3 = 259;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
LABEL_8:
  ExFreePoolWithTag(a3, 0x6245534Bu);
  _InterlockedIncrement(&dword_140C4038C);
  return v3;
}
