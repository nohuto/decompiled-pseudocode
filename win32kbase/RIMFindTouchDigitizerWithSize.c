/*
 * XREFs of RIMFindTouchDigitizerWithSize @ 0x1C01BD3A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0088EF0 (RawInputManagerDeviceObjectReference.c)
 */

void __fastcall RIMFindTouchDigitizerWithSize(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD **v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rbx
  __int64 v18; // rax

  v6 = (_QWORD **)(SGDGetUserSessionState(a1, a2, a3, a4) + 320);
  v7 = *v6;
  *a2 = 0LL;
  v12 = SGDGetUserSessionState(v9, v8, v10, v11);
  RIMLockExclusive(v12 + 240);
  while ( v7 != v6 )
  {
    v17 = v7 - 2;
    if ( *((_BYTE *)v7 + 104) == 2 && (*((_DWORD *)v17 + 68) & 0x80u) != 0 && (v17[32] & 0x400) == 0 )
    {
      v13 = v17[68];
      if ( (unsigned int)(*(_DWORD *)(v13 + 24) - 1) <= 3 )
      {
        v14 = *(_QWORD *)(v13 + 140) - *a1;
        if ( !v14 )
          v14 = *(_QWORD *)(v13 + 148) - a1[1];
        if ( !v14 )
        {
          RawInputManagerDeviceObjectReference(v7 - 2);
          *a2 = v17;
          break;
        }
      }
    }
    v7 = (_QWORD *)*v7;
  }
  v18 = SGDGetUserSessionState(v14, v13, v15, v16);
  *(_QWORD *)(v18 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 240, 0LL);
  KeLeaveCriticalRegion();
}
