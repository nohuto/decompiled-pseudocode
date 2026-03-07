void __fastcall ExpLeaveWorkerFactoryAwayMode(__int64 *Object)
{
  if ( (Object[51] & 0x400) != 0
    && (unsigned __int8)KiDeregisterObjectWaitBlock(*(volatile signed __int32 **)(Object[2] + 8), Object + 77) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 102) &= ~0x400u;
  }
  *((_DWORD *)Object + 102) &= ~0x200u;
}
