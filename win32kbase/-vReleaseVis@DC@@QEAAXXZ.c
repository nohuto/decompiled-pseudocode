void __fastcall DC::vReleaseVis(DC *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h]
  char v5; // [rsp+28h] [rbp-10h]

  *((_DWORD *)this + 9) |= 0x10u;
  v2 = HmgPentryFromPobj(this);
  *(_BYTE *)(v2 + 15) |= 4u;
  DC::AcquireDcVisRgnExclusive(this);
  REGION::vDeleteREGION(*((_QWORD *)this + 142));
  *((_QWORD *)this + 142) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 6400LL);
  if ( v5 )
    GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v4 + 1112));
}
