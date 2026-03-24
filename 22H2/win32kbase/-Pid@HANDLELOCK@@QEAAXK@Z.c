/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003350C
 * Callers:
 *     GreSetBrushOwner @ 0x1C001DDE0 (GreSetBrushOwner.c)
 *     HmgSetOwner @ 0x1C00368E0 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C00335E0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C01262A8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  __int64 v2; // r14
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r10
  unsigned int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  char EtwGdiHandleType; // al
  _QWORD *v10; // r9
  int v11; // ecx
  int v12; // r8d

  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ (a2 ^ *(_DWORD *)(*(_QWORD *)this + 8LL)) & 1;
  v2 = *(_QWORD *)this;
  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v5 = *((_QWORD *)v3 + 2);
  v6 = v4;
  v7 = *(_DWORD *)(v5 + 2056);
  v8 = v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16);
  if ( v4 < (unsigned int)v8 )
  {
    if ( v4 >= v7 )
      v8 = ((v4 - v7) >> 16) + 1;
    else
      v8 = 0LL;
    if ( (_DWORD)v8 )
      v6 = ((1 - (_DWORD)v8) << 16) - v7 + v4;
    if ( v6 < *(_DWORD *)(*(_QWORD *)(v5 + 8LL * (unsigned int)v8 + 8) + 20LL) )
      v8 = 2LL * (unsigned __int8)v6;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    LOBYTE(v8) = *(_BYTE *)(v2 + 14);
    EtwGdiHandleType = GetEtwGdiHandleType(v8);
    McTemplateK0pqqq_EtwWriteTransfer(v11, (unsigned int)&GdiUpdateHandleOwner, v12, *v10, EtwGdiHandleType);
  }
}
