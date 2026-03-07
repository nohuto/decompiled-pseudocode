__int64 __fastcall SpRenderHint(struct PDEVOBJ *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v10; // rax
  Gre::Base *v11; // rcx
  __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  int v15; // [rsp+48h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int16 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+70h] [rbp-10h]

  v8 = -1073741822;
  if ( (unsigned int)bNeedRenderHint(a1) )
  {
    v10 = *(_QWORD *)a1;
    v17 = 0LL;
    v18 = 256;
    v13 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    v16 = 0LL;
    v15 = 1;
    v11 = (Gre::Base *)*(unsigned int *)(v10 + 40);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      Gre::Base::Globals(v11);
      v12 = *(_QWORD *)a1;
      *(_QWORD *)&v13 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v14 = v12;
      GreAcquireSemaphore(v13);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v13, 11LL);
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 3408LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 1768LL),
           a2,
           a3,
           a4);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v13);
  }
  return v8;
}
