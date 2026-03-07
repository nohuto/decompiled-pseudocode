void __fastcall PRECOMPUTE::~PRECOMPUTE(PRECOMPUTE *this)
{
  __int64 v1; // rax
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 40LL) = 0LL;
    v5 = *(_QWORD *)this;
    v6 = *((_QWORD *)this + 1);
    v7 = *((_QWORD *)this + 2);
    v8 = *((_QWORD *)this + 3);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) = 0;
    v3 = *(void **)(*((_QWORD *)this + 4) + 48LL);
    if ( v3 )
      Win32FreePool(v3);
    *(_QWORD *)(*((_QWORD *)this + 4) + 48LL) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 4) + 60LL) = 0;
    v4 = *(void **)(*((_QWORD *)this + 4) + 64LL);
    if ( v4 )
      Win32FreePool(v4);
    *(_QWORD *)(*((_QWORD *)this + 4) + 64LL) = 0LL;
  }
}
