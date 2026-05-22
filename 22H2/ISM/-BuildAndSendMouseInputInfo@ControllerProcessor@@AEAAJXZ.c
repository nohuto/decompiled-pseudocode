/*
 * XREFs of ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x180047A7C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180121690 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x180121D08 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x1801204F0 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180122694 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendMouseInputInfo(ControllerProcessor *this)
{
  unsigned int v2; // r10d
  unsigned __int16 v3; // cx
  _DWORD *v4; // r8
  int v5; // eax
  int v6; // edi
  unsigned int v7; // r11d
  __int64 v8; // r9
  _DWORD *v9; // rax
  int v10; // eax
  _DWORD *v11; // r8
  int v12; // edi
  unsigned int v13; // r11d
  __int64 v14; // r9
  _DWORD *v15; // rax
  int v16; // eax
  int v17; // eax
  _BYTE v19[432]; // [rsp+20h] [rbp-1D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v2 = 0;
  v3 = 0;
  if ( *((_BYTE *)this + 276) )
  {
    v4 = &unk_1801C55AC;
    do
    {
      v5 = *(v4 - 1);
      v6 = v5 & *((_DWORD *)this + 52);
      if ( (v6 != 0) != ((v5 & *((_DWORD *)this + 68)) != 0) )
      {
        v7 = 0;
        v8 = 0LL;
        v9 = &unk_1801C7A08;
        while ( *v4 != *v9 )
        {
          ++v7;
          ++v8;
          v9 += 3;
          if ( v7 >= 5 )
            goto LABEL_12;
        }
        *((_DWORD *)this + v8 + 1875) = v6 != 0;
        if ( v6 )
          v10 = *((_DWORD *)&unk_1801C7A08 + 3 * v8 + 2);
        else
          v10 = *((_DWORD *)&unk_1801C7A08 + 3 * v8 + 1);
        v3 |= v10;
      }
LABEL_12:
      ++v2;
      v4 += 2;
    }
    while ( v2 < 2 );
  }
  else
  {
    v11 = &unk_1801C559C;
    do
    {
      v12 = *((_DWORD *)this + 45) & *(v11 - 1);
      if ( (v12 != 0) != ((*(v11 - 1) & *((_DWORD *)this + 61)) != 0) )
      {
        v13 = 0;
        v14 = 0LL;
        v15 = &unk_1801C7A08;
        while ( *v11 != *v15 )
        {
          ++v13;
          ++v14;
          v15 += 3;
          if ( v13 >= 5 )
            goto LABEL_24;
        }
        *((_DWORD *)this + v14 + 1875) = v12 != 0;
        if ( v12 )
          v16 = *((_DWORD *)&unk_1801C7A08 + 3 * v14 + 2);
        else
          v16 = *((_DWORD *)&unk_1801C7A08 + 3 * v14 + 1);
        v3 |= v16;
      }
LABEL_24:
      ++v2;
      v11 += 2;
    }
    while ( v2 < 2 );
  }
  if ( v3 )
  {
    ControllerProcessor::BuildMouseInputInfo(this, v19, v3);
    v17 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v19);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1154LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v17);
      JUMPOUT(0x180047C1ALL);
    }
  }
  return 0LL;
}
