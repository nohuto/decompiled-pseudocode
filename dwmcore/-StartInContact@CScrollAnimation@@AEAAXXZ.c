void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  CScrollAnimation *v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  CScrollAnimation **v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  v7 = 0LL;
  v3 = *(_QWORD *)this;
  *((_OWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 45) = v2;
  *((_QWORD *)this + 56) = v7;
  (*(void (**)(void))(v3 + 336))();
  *((_DWORD *)this + 84) = 1;
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v10 = 0;
      v8 = &v5;
      v5 = this;
      v9 = 8;
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18037EAE8, 0LL, 0LL, 3u, &v6);
    }
  }
}
