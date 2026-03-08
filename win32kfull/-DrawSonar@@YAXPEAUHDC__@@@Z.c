/*
 * XREFs of ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01BD6A4
 * Callers:
 *     zzzAnimateFade @ 0x1C01BE518 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01BE79C (zzzStartSonar.c)
 * Callees:
 *     FillRect @ 0x1C00881F8 (FillRect.c)
 *     GreCreatePen @ 0x1C00E8908 (GreCreatePen.c)
 *     NtGdiEllipse @ 0x1C02AF970 (NtGdiEllipse.c)
 */

void __fastcall DrawSonar(HDC a1)
{
  HBRUSH SolidBrush; // rax
  HBRUSH v3; // r12
  __int64 Pen; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h]

  SolidBrush = (HBRUSH)GreCreateSolidBrush(16711935LL);
  v3 = SolidBrush;
  if ( SolidBrush )
  {
    FillRect(a1, &stru_1C0321FA8, SolidBrush);
    Pen = GreCreatePen(0, 0, 0xFFFFFF, 0LL);
    v5 = Pen;
    if ( Pen )
    {
      v19 = GreSelectPen(a1, Pen);
      v6 = GreCreateSolidBrush(8421504LL);
      v18 = v6;
      if ( v6 )
      {
        v7 = GreSelectBrush(a1, v6);
        v9 = *(_DWORD *)(SGDGetUserSessionState(v8) + 15964) + 100;
        SGDGetUserSessionState(v10);
        SGDGetUserSessionState(v11);
        SGDGetUserSessionState(v12);
        NtGdiEllipse(a1, v9);
        GreSelectBrush(a1, v3);
        v14 = *(_DWORD *)(SGDGetUserSessionState(v13) + 15964) + 96;
        SGDGetUserSessionState(v15);
        SGDGetUserSessionState(v16);
        SGDGetUserSessionState(v17);
        NtGdiEllipse(a1, v14);
        GreSelectBrush(a1, v7);
        GreDeleteObject(v18);
      }
      GreSelectPen(a1, v19);
      GreDeleteObject(v5);
    }
    GreDeleteObject(v3);
  }
}
