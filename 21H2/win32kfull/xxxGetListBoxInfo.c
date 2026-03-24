/*
 * XREFs of xxxGetListBoxInfo @ 0x1C0249570
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C01FA7B0 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX @ 0x1C01D48F8 (unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX.c)
 */

__int64 __fastcall xxxGetListBoxInfo(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned __int64 *v4; // r14
  PRKPROCESS *v6; // rdi
  __int64 v7; // rcx
  int v8; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax

  v2 = 0;
  v4 = (unsigned __int64 *)unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX(a1);
  if ( v4 )
  {
    v6 = *(PRKPROCESS **)(a1[2] + 424LL);
    if ( v6 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v3) )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      KeAttachProcess(*v6);
    }
    v9 = *v4;
    if ( *v4 )
    {
      if ( PsGetCurrentProcessWow64Process(v7) )
        v10 = 0LL;
      else
        v10 = 3LL;
      if ( (v10 & v9) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (*(_DWORD *)(v9 + 92) & 0x40000) != 0 )
        v2 = *(_DWORD *)(v9 + 76);
      else
        v2 = *(_DWORD *)(v9 + 32);
    }
    if ( v8 )
      KeDetachProcess();
    return v2;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout((unsigned __int64)a1, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
