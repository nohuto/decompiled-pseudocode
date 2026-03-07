__int64 __fastcall DXGCHANNELENDPOINTPROXY::Create(
        int a1,
        struct IDXGCHANNELSUBSCRIBER *a2,
        struct DXGVMBUSCHANNEL *a3,
        struct DXGCHANNELENDPOINTPROXY **a4)
{
  unsigned int v8; // ebx
  DXGCHANNELENDPOINTPROXY *v9; // rax
  DXGCHANNELENDPOINTPROXY *v10; // r9

  v8 = -1073741823;
  v9 = (DXGCHANNELENDPOINTPROXY *)operator new[](0x98uLL, 0x4B677844u, 256LL);
  if ( v9 )
    v10 = DXGCHANNELENDPOINTPROXY::DXGCHANNELENDPOINTPROXY(v9);
  else
    v10 = 0LL;
  if ( a2 )
  {
    *((_DWORD *)v10 + 9) = a1;
    v8 = 0;
    *((_QWORD *)v10 + 17) = a2;
    *((_QWORD *)v10 + 16) = a3;
    *a4 = v10;
  }
  else if ( v10 )
  {
    (*(void (__fastcall **)(DXGCHANNELENDPOINTPROXY *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return v8;
}
