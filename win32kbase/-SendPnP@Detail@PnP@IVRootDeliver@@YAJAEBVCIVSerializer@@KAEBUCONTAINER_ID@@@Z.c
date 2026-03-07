int __fastcall IVRootDeliver::PnP::Detail::SendPnP(
        IVRootDeliver::PnP::Detail *this,
        const struct CIVSerializer *a2,
        __int64 a3,
        const struct CONTAINER_ID *a4)
{
  if ( *(_WORD *)a3 || *(_WORD *)(a3 + 2) )
    return ivrIVSend(this, (unsigned int)a2, (const struct CONTAINER_ID *)a3);
  else
    return ivrIVBroadcast(this, (unsigned int)a2, (const struct CONTAINER_ID *)a3);
}
