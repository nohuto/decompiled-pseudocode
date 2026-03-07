bool __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx

  v4 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v5) + 32) + 23536LL) && a2 == *(_QWORD *)(v4 + 23488) )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(v4 + 23496), (PRKAPC_STATE)((char *)this + 8));
    *((_BYTE *)this + 56) = 1;
  }
  return *((_BYTE *)this + 56);
}
