void __fastcall CDWMBackchannelManager::PostNewMessage(CDWMBackchannelManager *this, struct CFlipConsumerMessage *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r10d
  _DWORD *v4; // r8
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // al

  v2 = *((_DWORD *)a2 + 3);
  v3 = 0;
  v4 = (_DWORD *)*((_QWORD *)a2 + 3);
  if ( v2 )
  {
    v6 = *((_QWORD *)a2 + 2);
    while ( 1 )
    {
      v7 = 32LL * v3;
      v8 = *(_QWORD *)(v7 + v6) - *(_QWORD *)&GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data1;
      if ( !v8 )
        v8 = *(_QWORD *)(v7 + v6 + 8) - *(_QWORD *)GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data4;
      if ( !v8 && *(_DWORD *)(v7 + v6 + 16) == 4 )
        break;
      ++v3;
      v4 = (_DWORD *)((char *)v4 + *(unsigned int *)(v7 + v6 + 16));
      if ( v3 >= v2 )
        return;
    }
    if ( v4 )
    {
      switch ( *v4 )
      {
        case 1:
          v9 = *((_BYTE *)this + 40);
          break;
        case 2:
          v9 = *((_BYTE *)this + 40) >> 1;
          break;
        case 3:
          v9 = *((_BYTE *)this + 40) >> 2;
          break;
        default:
          return;
      }
      if ( (v9 & 1) != 0 )
        CBackchannelManager::PostNewMessage(this, a2);
    }
  }
}
