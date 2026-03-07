__int64 __fastcall PpmPerfGetFrequencyBandStats(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prcb; // rax
  __int64 v4; // r8
  unsigned __int8 *v5; // rcx
  unsigned __int8 v6; // r10
  unsigned __int8 v7; // al
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r9
  unsigned __int16 *v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+32h] [rbp-16h]
  __int16 v18; // [rsp+36h] [rbp-12h]
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( a1 )
  {
    v15[1] = (unsigned __int16 *)qword_140C0BD78[0];
    v15[0] = (unsigned __int16 *)&PpmCheckRegistered;
    v16 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v19, v15) )
    {
      Prcb = KeGetPrcb(v19);
      v4 = *(_QWORD *)(Prcb + 33984);
      if ( v4 )
      {
        v5 = (unsigned __int8 *)(Prcb + 34059);
        if ( KeHeteroSystem )
          v6 = *(_BYTE *)(Prcb + 34056);
        else
          v6 = *v5;
        if ( v6 )
        {
          v7 = 1;
        }
        else
        {
          if ( KeHeteroSystem )
            v5 = (unsigned __int8 *)(Prcb + 34056);
          v7 = *v5;
        }
        v8 = 48LL;
        v9 = 1152LL * v7;
        v10 = v4 - v9 - a1;
        v11 = (_QWORD *)(v9 + a1);
        do
        {
          v12 = v11;
          v13 = 3LL;
          do
          {
            *v12 += *(_QWORD *)((char *)v12 + v10 + 248);
            v12 += 48;
            --v13;
          }
          while ( v13 );
          ++v11;
          --v8;
        }
        while ( v8 );
      }
    }
  }
  else
  {
    v1 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v1;
}
