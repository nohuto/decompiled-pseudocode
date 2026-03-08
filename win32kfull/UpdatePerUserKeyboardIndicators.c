/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x1C00EEEE8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0x80000000;
  result = gProtocolType;
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( !gProtocolType )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators", 0x80000000LL, &v16, 0);
    v4 = v16 & 0x80000002;
    v16 = v4;
    if ( v4 == 0x80000000 )
    {
      v4 = *(unsigned __int16 *)(SGDGetUserSessionState(v3) + 12602);
      v16 = v4;
    }
    LOBYTE(v3) = *(_BYTE *)(v2 + 272);
    if ( (v4 & 2) != 0 )
    {
      LOBYTE(v3) = v3 | 2;
      *(_BYTE *)(v2 + 272) = v3;
      v13 = SGDGetUserSessionState(v3);
      *(_BYTE *)(v13 + 14028) |= 2u;
      v15 = SGDGetUserSessionState(v14);
      *(_BYTE *)(v15 + 14092) |= 2u;
    }
    else
    {
      LOBYTE(v3) = v3 & 0xFD;
      *(_BYTE *)(v2 + 272) = v3;
      v5 = SGDGetUserSessionState(v3);
      *(_BYTE *)(v5 + 14028) &= ~2u;
      v7 = SGDGetUserSessionState(v6);
      *(_BYTE *)(v7 + 14092) &= ~2u;
    }
    *(_BYTE *)(SGDGetUserSessionState(v8) + 13988) = 0;
    *(_BYTE *)(v2 + 241) &= ~8u;
    v10 = SGDGetUserSessionState(v9);
    *(_BYTE *)(v10 + 13997) &= ~8u;
    v12 = SGDGetUserSessionState(v11);
    *(_BYTE *)(v12 + 14061) &= ~8u;
    return UpdateKeyLights(0LL);
  }
  return result;
}
