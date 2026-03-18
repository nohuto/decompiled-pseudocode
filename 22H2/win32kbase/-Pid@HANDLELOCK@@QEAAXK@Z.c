/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0046E44
 * Callers:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 * Callees:
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFACC (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  char v2; // di
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  char EtwGdiHandleType; // bl
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax
  int v15; // r8d

  v2 = a2;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ (*(_DWORD *)(*(_QWORD *)this + 8LL) ^ a2) & 1;
  v4 = *(_QWORD *)HANDLELOCK::pObj(this);
  LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)this + 14LL);
  EtwGdiHandleType = GetEtwGdiHandleType(v5, v6, v7, v8);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    v14 = (_DWORD *)SGDGetUserSessionState(v10, v9, v12, v13);
    McTemplateK0pqqq_EtwWriteTransfer(*v14, (unsigned int)&GdiUpdateHandleOwner, v15, v4, EtwGdiHandleType, *v14, v2);
  }
}
