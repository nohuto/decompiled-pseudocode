__int64 __fastcall bInitPrivatePFT(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  unsigned int v2; // ebx
  struct PFT *v3; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = Gre::Base::Globals(a1);
  v6 = *((_QWORD *)v1 + 6);
  GreAcquireSemaphore(v6);
  v2 = 0;
  if ( *((_QWORD *)v1 + 796) )
  {
    v2 = 1;
  }
  else
  {
    v3 = pAllocateAndInitializePFT(20);
    *((_QWORD *)v1 + 796) = v3;
    if ( v3 )
    {
      v2 = 1;
      FHMEMOBJ::FHMEMOBJ((__int64)v5, (_QWORD *)v3 + 1, 0, 0x14u);
      FHMEMOBJ::FHMEMOBJ((__int64)v5, *((_QWORD **)v1 + 796), 1, 0x14u);
      FHMEMOBJ::FHMEMOBJ((__int64)v5, (_QWORD *)(*((_QWORD *)v1 + 796) + 16LL), 2, 0x14u);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v2;
}
