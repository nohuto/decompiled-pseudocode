__int64 __fastcall XEPALOBJ::ulAnimatePalette(
        XEPALOBJ *this,
        unsigned int a2,
        int a3,
        const struct tagPALETTEENTRY *a4)
{
  __int64 v5; // rdi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // r8
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r12
  unsigned int v13; // r14d
  __int64 v14; // rsi
  unsigned __int8 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // r15
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int8 *v24; // rax
  void (__fastcall *v25)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+80h] [rbp+30h] BYREF

  v5 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  v9 = Gre::Base::Globals(v8);
  v10 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *((_QWORD *)v9 + 750) )
    goto LABEL_27;
  if ( !a4 )
    goto LABEL_27;
  v11 = *(_DWORD *)(v10 + 28);
  if ( (unsigned int)v5 >= v11 )
    goto LABEL_27;
  if ( (int)v5 + a3 > v11 )
    a3 = v11 - v5;
  if ( a3 )
  {
    v12 = v5;
    v13 = 0;
    v14 = *(_QWORD *)(v10 + 112) + 4 * v5;
    v15 = 0LL;
    v27 = 0LL;
    v28 = *((_QWORD *)v9 + 5);
    GreAcquireSemaphore(v28);
    v16 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 56LL) )
    {
      v17 = *(_QWORD *)(v16 + 48);
      if ( (*(_DWORD *)(v17 + 2140) & 0x100) != 0 )
      {
        v27 = *(_QWORD *)(v17 + 1776);
        v18 = *(_QWORD *)(v16 + 80);
        if ( v18 )
          v15 = (unsigned __int8 *)(v18 + v12 + 4);
      }
    }
    v19 = (char *)a4 - v14;
    do
    {
      v20 = *(_DWORD *)&v19[v14];
      --a3;
      v21 = (*(_BYTE *)(v14 + 3) & 1) == 0;
      LODWORD(v30) = v20;
      if ( !v21 )
      {
        ++v13;
        *(_DWORD *)v14 = v20;
        if ( v15 )
        {
          v22 = *v15;
          v23 = *(_QWORD *)(v27 + 112);
          if ( (*(_BYTE *)(v23 + 4 * v22 + 3) & 1) != 0 )
          {
            BYTE3(v30) = *(_BYTE *)(v23 + 4 * v22 + 3);
            *(_DWORD *)(v23 + 4 * v22) = v30;
          }
        }
      }
      v24 = v15 + 1;
      if ( !v15 )
        v24 = 0LL;
      v14 += 4LL;
      v15 = v24;
    }
    while ( a3 );
    SEMOBJ::vUnlock((SEMOBJ *)&v28);
    if ( v15 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)this + 48LL);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v29, (struct PDEVOBJ *)&v30);
      v28 = *(_QWORD *)(v30 + 56);
      GreAcquireSemaphore(v28);
      GreAcquireSemaphore(*(_QWORD *)(v30 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v30 + 48), 11LL);
      if ( (*(_DWORD *)(v30 + 2140) & 0x100) != 0 && (*(_DWORD *)(v30 + 40) & 0x400) == 0 )
      {
        v25 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v30 + 1736);
        if ( v25 )
          v25(*(_QWORD *)(*(_QWORD *)(v30 + 24) + 1768LL), &v27, 0LL, 0LL, *(_DWORD *)(v27 + 28));
        else
          v13 = 0;
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v30 + 48));
      SEMOBJ::vUnlock((SEMOBJ *)&v28);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v29);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
    return v13;
  }
  else
  {
LABEL_27:
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
    return 0LL;
  }
}
