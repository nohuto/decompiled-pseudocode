/*
 * XREFs of RtlpInitCodePageTables @ 0x14080EA38
 * Callers:
 *     ExInitializeNls @ 0x14080F164 (ExInitializeNls.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     NtGetNlsSectionPtr @ 0x14069E7D0 (NtGetNlsSectionPtr.c)
 *     RtlInitCodePageTable @ 0x14080EBB0 (RtlInitCodePageTable.c)
 */

__int64 __fastcall RtlpInitCodePageTables(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // r15d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY **p_Blink; // rdi
  PUSHORT *v6; // r14
  PUSHORT *v7; // rbx
  struct _LIST_ENTRY **v8; // rsi
  __int64 CurrentServerSilo; // rbx
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *v11; // rax

  v2 = a2;
  v3 = a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  p_Blink = &CurrentServerSiloGlobals[66].Blink;
  v6 = (PUSHORT *)&CurrentServerSiloGlobals[74].Blink;
  v7 = (PUSHORT *)&CurrentServerSiloGlobals[75];
  v8 = &CurrentServerSiloGlobals[70].Blink;
  if ( (_WORD)v3 != 0xFDE9 && (_WORD)v2 != 0xFDE9 )
  {
    if ( NtGetNlsSectionPtr(0xBu, v3, 0LL, &CurrentServerSiloGlobals[74].Blink, 0LL) >= 0 )
    {
      if ( (_WORD)v2 == (_WORD)v3 )
      {
        *v7 = *v6;
        goto LABEL_6;
      }
      if ( NtGetNlsSectionPtr(0xBu, v2, 0LL, v7, 0LL) >= 0 )
        goto LABEL_6;
    }
    *v6 = 0LL;
    *v7 = 0LL;
  }
LABEL_6:
  RtlInitCodePageTable(*v6, (PCPTABLEINFO)p_Blink);
  RtlInitCodePageTable(*v7, (PCPTABLEINFO)v8);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo == PdcCreateWatchdogAroundClientCall() )
  {
    if ( *(_WORD *)p_Blink == 0xFDE9 || *(_WORD *)v8 == 0xFDE9 )
    {
      NlsAnsiCodePage = -535;
      NlsOemCodePage = -535;
      LOBYTE(NlsMbCodePageTag) = 0;
      LOBYTE(NlsMbOemCodePageTag) = 0;
    }
    else
    {
      NlsAnsiCodePage = *(_WORD *)p_Blink;
      v10 = (struct _LIST_ENTRY *)&NlsEmptyLeadByteInfoTable;
      if ( *((_WORD *)p_Blink + 6) )
      {
        NlsLeadByteInfo = p_Blink[7];
        v11 = p_Blink[7];
      }
      else
      {
        NlsLeadByteInfo = &NlsEmptyLeadByteInfoTable;
        v11 = (struct _LIST_ENTRY *)&NlsEmptyLeadByteInfoTable;
      }
      p_Blink[18] = v11;
      LOBYTE(NlsMbCodePageTag) = *((_WORD *)p_Blink + 6) != 0;
      NlsOemCodePage = *(_WORD *)v8;
      if ( *((_WORD *)v8 + 6) )
      {
        NlsOemLeadByteInfo = (PUSHORT *)v8[7];
        v10 = v8[7];
      }
      else
      {
        NlsOemLeadByteInfo = (PUSHORT *)&NlsEmptyLeadByteInfoTable;
      }
      p_Blink[19] = v10;
      LOBYTE(NlsMbOemCodePageTag) = *((_WORD *)v8 + 6) != 0;
    }
  }
  return 0LL;
}
