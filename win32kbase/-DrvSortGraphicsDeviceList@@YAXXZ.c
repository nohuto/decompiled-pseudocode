void __fastcall DrvSortGraphicsDeviceList(__int64 a1)
{
  struct tagGRAPHICS_DEVICE *v1; // rdi
  struct tagGRAPHICS_DEVICE *v2; // rsi
  struct tagGRAPHICS_DEVICE *v3; // rbp
  struct tagGRAPHICS_DEVICE *v4; // rbx
  int v5; // eax
  struct tagGRAPHICS_DEVICE *v6; // rcx
  struct tagGRAPHICS_DEVICE *v7; // r14
  struct tagGRAPHICS_DEVICE *v8; // r8
  __int64 v9; // rax
  bool v10; // zf
  struct tagGRAPHICS_DEVICE *v11; // rax
  struct tagGRAPHICS_DEVICE *v12; // rax

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = *(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL);
  if ( v4 )
  {
    do
    {
      v5 = *((_DWORD *)v4 + 40);
      v6 = v2;
      v7 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v4 + 16);
      v8 = v3;
      if ( (v5 & 0x800000) != 0 )
      {
        if ( (v5 & 0x100000) != 0 )
        {
          DrvMoveGraphicsDevice(v4, v1, 0LL);
          v12 = v4;
          v3 = v4;
          if ( v2 )
            v12 = v2;
          v2 = v12;
        }
        else
        {
          if ( v3 && (v9 = *((_QWORD *)v3 + 29)) != 0 && v9 == *((_QWORD *)v4 + 29) )
          {
            v10 = v2 == v3;
            v11 = v4;
            v3 = v4;
            if ( !v10 )
              v11 = v2;
            v2 = v11;
          }
          else
          {
            v2 = v4;
            v8 = v6;
          }
          DrvMoveGraphicsDevice(v4, v1, v8);
        }
        if ( v1 )
        {
          if ( *((struct tagGRAPHICS_DEVICE **)v1 + 16) != v4 )
            v4 = v1;
        }
      }
      v1 = v4;
      v4 = v7;
    }
    while ( v7 );
  }
}
