__int64 __fastcall bInitFontTables(Gre::Base *a1)
{
  unsigned int v1; // ebx
  struct Gre::Base::SESSION_GLOBALS *v2; // rbp
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  struct PFT *v5; // rax
  struct PFT *v6; // rax
  __int64 Semaphore; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v12 = 0;
  v13 = 0;
  v2 = Gre::Base::Globals(a1);
  v4 = *(_QWORD **)(SGDGetSessionState(v3) + 32);
  vQueryRegistryForNumberOfBuckets(&v12, &v13);
  v5 = pAllocateAndInitializePFT(v12);
  v4[2534] = v5;
  if ( v5 )
  {
    v6 = pAllocateAndInitializePFT(v13);
    v4[2535] = v6;
    if ( v6 )
    {
      Semaphore = GreCreateSemaphore();
      *((_QWORD *)v2 + 6) = Semaphore;
      if ( Semaphore )
      {
        v8 = GreCreateSemaphore();
        v4[2955] = v8;
        if ( v8 )
        {
          v9 = GreCreateSemaphore();
          v4[2925] = v9;
          if ( v9 )
          {
            v1 = 1;
            FHMEMOBJ::FHMEMOBJ((__int64)v11, (_QWORD *)(v4[2534] + 8LL), 0, v12);
            FHMEMOBJ::FHMEMOBJ((__int64)v11, (_QWORD *)v4[2534], 1, v12);
            FHMEMOBJ::FHMEMOBJ((__int64)v11, (_QWORD *)(v4[2534] + 16LL), 2, v12);
          }
        }
      }
    }
  }
  return v1;
}
