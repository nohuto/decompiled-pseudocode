void __fastcall MULTIPANSURFLOCK::vUnLockBmp2AndRemovePunt(MULTIPANSURFLOCK *this)
{
  DHSURF dhsurf; // rax

  if ( *((_QWORD *)this + 2) )
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 3) + 24LL));
    EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 776LL));
    --*(_DWORD *)(*((_QWORD *)this + 3) + 20LL);
    dhsurf = (DHSURF)*((_QWORD *)this + 3);
    if ( !*((_DWORD *)dhsurf + 5) )
      EngModifySurface(
        *(HSURF *)(*((_QWORD *)this + 2) + 8LL),
        *(HDEV *)(*((_QWORD *)dhsurf + 4) + 48LL),
        0x394ABu,
        3u,
        dhsurf,
        0LL,
        0,
        0LL);
    EngReleaseSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 776LL));
    *((_QWORD *)this + 2) = 0LL;
  }
}
