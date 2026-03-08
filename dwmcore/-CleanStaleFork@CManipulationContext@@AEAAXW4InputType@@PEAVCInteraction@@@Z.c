/*
 * XREFs of ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x1801A0AD8
 * Callers:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A2A58 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800E80CC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1801A2010 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 */

void __fastcall CManipulationContext::CleanStaleFork(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+78h] [rbp-11h]
  int v18; // [rsp+7Ch] [rbp-Dh]
  __int64 *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  __int64 *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]
  int *v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+ACh] [rbp+23h]

  if ( a3 )
  {
    v3 = a2;
    v4 = a3;
    v6 = a2 - 1;
    do
    {
      if ( *(char *)(v4 + 192) < 0 )
        break;
      v7 = *(_QWORD *)(v4 + 208);
      if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
      {
        v8 = v3 - 1;
        if ( v6 >= 6 )
          v8 = 0LL;
        v9 = *(_DWORD *)(v4 + 4 * v8 + 248);
        v27 = 0;
        v24 = 0;
        v21 = 0;
        v18 = 0;
        v11 = v9;
        v25 = &v11;
        v22 = &v12;
        v19 = &v13;
        v16 = &v14;
        v12 = v7;
        v13 = v4;
        v14 = a1;
        v26 = 4;
        v23 = 8;
        v20 = 8;
        v17 = 8;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1803E07D0,
          (unsigned __int8 *)dword_18037A83B,
          0LL,
          0LL,
          6u,
          &v15);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 64) + 56LL))(v4 + 64, (unsigned int)v3);
      v10 = v3 - 1;
      if ( v6 >= 6 )
        v10 = 0LL;
      --*(_DWORD *)(v4 + 4 * v10 + 248);
      if ( !(unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v4) )
        CManipulationContext::RemoveInteractionLeafFromTree((struct CInteraction *)v4);
      *(_BYTE *)(v4 + 193) &= ~1u;
      v4 = v7;
    }
    while ( v7 );
  }
}
