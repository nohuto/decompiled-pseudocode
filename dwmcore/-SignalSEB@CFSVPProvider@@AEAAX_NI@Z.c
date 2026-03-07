void __fastcall CFSVPProvider::SignalSEB(CFSVPProvider *this, char a2, unsigned int a3)
{
  char updated; // di
  struct _SEB_RPC_PUBLISH_DATA *v5; // rcx
  char v7; // bp
  struct _SEB_RPC_PUBLISH_DATA *v9; // rcx

  updated = 0;
  v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 3);
  v7 = a3 > 0xC8;
  if ( v5 && *((_BYTE *)this + 9) != v7 )
    PubSebiUpdateLevelEventRpc(v5, a3 > 0xC8);
  v9 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2);
  if ( v9 )
  {
    if ( *((_BYTE *)this + 8) == a2 )
      goto LABEL_8;
    updated = PubSebiUpdateLevelEventRpc(v9, a2 != 0);
  }
  if ( *((_BYTE *)this + 8) == a2 )
  {
LABEL_8:
    if ( *((_BYTE *)this + 9) == v7 )
      return;
  }
  *((_BYTE *)this + 8) = a2;
  *((_BYTE *)this + 9) = v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0zqq_EventWriteTransfer((_DWORD)v9, a2, a3, a3, updated);
}
