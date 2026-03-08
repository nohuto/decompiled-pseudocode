/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C005162C
 * Callers:
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 * Callees:
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C005168C (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00EE72C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  char v2; // di
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  char EtwGdiHandleType; // bl
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax
  int v14; // r8d

  v2 = a2;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ (*(_DWORD *)(*(_QWORD *)this + 8LL) ^ a2) & 1;
  v4 = *(_QWORD *)HANDLELOCK::pObj(this);
  LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)this + 14LL);
  EtwGdiHandleType = GetEtwGdiHandleType(v5, v6, v7);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    v13 = (_DWORD *)SGDGetUserSessionState(v9, v8, v11, v12);
    McTemplateK0pqqq_EtwWriteTransfer(*v13, (unsigned int)&GdiUpdateHandleOwner, v14, v4, EtwGdiHandleType, *v13, v2);
  }
}
