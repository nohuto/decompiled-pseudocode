void __fastcall CActivationObjectManager::BringISMUptodate(CActivationObjectManager *this)
{
  unsigned __int64 v2; // rcx
  _QWORD **v3; // rsi
  _QWORD *i; // rdi
  __int128 v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+30h] [rbp-48h]
  __int128 v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+50h] [rbp-28h]

  CPushLock::AcquireLockShared((CActivationObjectManager *)((char *)this + 16));
  v3 = (_QWORD **)*((_QWORD *)this + 1);
  for ( i = v3; i; CActivationObjectManager::NotifySystemSateChanged(v2, (__int64)(i - 1), 0, (unsigned int *)&v5) )
  {
    i = (_QWORD *)*i;
    if ( ((unsigned __int8)i & 1) != 0 )
      break;
LABEL_6:
    if ( !i )
      goto LABEL_5;
    v5 = 0LL;
    v8 = 0LL;
    v6 = 0LL;
    LODWORD(v7) = 0;
  }
  ++v3;
  v2 = (unsigned __int64)*((unsigned int *)this + 1) >> 5;
  while ( (unsigned __int64)v3 < *((_QWORD *)this + 1) + 8 * v2 )
  {
    i = *v3;
    if ( ((unsigned __int8)*v3 & 1) == 0 )
      goto LABEL_6;
    ++v3;
  }
LABEL_5:
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)this + 16));
}
