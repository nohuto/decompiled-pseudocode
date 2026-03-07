void __fastcall FxPkgPnp::PnpAssignInterruptsSyncIrql(FxPkgPnp *this)
{
  _LIST_ENTRY *p_m_InterruptListHead; // r9
  _LIST_ENTRY *i; // rdx
  unsigned __int8 v3; // r8
  _LIST_ENTRY *Flink; // r10
  _LIST_ENTRY *v5; // r11
  unsigned __int8 v6; // al

  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
  {
    v3 = BYTE4(i[-4].Blink);
    if ( !v3 )
    {
      BYTE1(i[-19].Blink) = 0;
      continue;
    }
    if ( i[-19].Flink != (_LIST_ENTRY *)&i[-18].Blink )
    {
      if ( BYTE1(i[-19].Blink) )
        continue;
      Flink = i->Flink;
      v5 = i->Flink;
      if ( i->Flink != p_m_InterruptListHead )
      {
        do
        {
          if ( v5[-19].Flink == i[-19].Flink )
          {
            v6 = v3;
            if ( BYTE4(v5[-4].Blink) > v3 )
              v6 = BYTE4(v5[-4].Blink);
            v3 = v6;
          }
          v5 = v5->Flink;
        }
        while ( v5 != p_m_InterruptListHead );
        do
        {
          if ( Flink[-19].Flink == i[-19].Flink )
            BYTE1(Flink[-19].Blink) = v3;
          Flink = Flink->Flink;
        }
        while ( Flink != p_m_InterruptListHead );
      }
    }
    BYTE1(i[-19].Blink) = v3;
  }
}
