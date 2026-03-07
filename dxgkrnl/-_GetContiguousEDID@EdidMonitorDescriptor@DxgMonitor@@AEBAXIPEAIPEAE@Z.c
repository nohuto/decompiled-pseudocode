void __fastcall DxgMonitor::EdidMonitorDescriptor::_GetContiguousEDID(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rbx
  DxgMonitor::EdidMonitorDescriptor *v7; // r11
  const unsigned __int8 *EdidBaseBlockPtr; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8

  v4 = 0;
  v6 = 0LL;
  v7 = this;
  while ( 1 )
  {
    if ( !v4 )
    {
      EdidBaseBlockPtr = DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(v7);
      goto LABEL_4;
    }
    if ( v4 >= *((_DWORD *)v7 + 4) )
      break;
    v10 = *((_QWORD *)v7 + 3);
    if ( !v10 )
      break;
    v11 = *(_QWORD *)(v6 + v10);
    if ( *(_QWORD *)(v11 + 16) < 0x80uLL )
      break;
    EdidBaseBlockPtr = (const unsigned __int8 *)(v11 + 24);
LABEL_4:
    if ( EdidBaseBlockPtr )
    {
      v9 = v4 << 7;
      if ( (int)v9 + 128 <= a2 )
      {
        ++v4;
        v6 += 8LL;
        *(_OWORD *)&a4[v9] = *(_OWORD *)EdidBaseBlockPtr;
        *(_OWORD *)&a4[v9 + 16] = *((_OWORD *)EdidBaseBlockPtr + 1);
        *(_OWORD *)&a4[v9 + 32] = *((_OWORD *)EdidBaseBlockPtr + 2);
        *(_OWORD *)&a4[v9 + 48] = *((_OWORD *)EdidBaseBlockPtr + 3);
        *(_OWORD *)&a4[v9 + 64] = *((_OWORD *)EdidBaseBlockPtr + 4);
        *(_OWORD *)&a4[v9 + 80] = *((_OWORD *)EdidBaseBlockPtr + 5);
        *(_OWORD *)&a4[v9 + 96] = *((_OWORD *)EdidBaseBlockPtr + 6);
        *(_OWORD *)&a4[v9 + 112] = *((_OWORD *)EdidBaseBlockPtr + 7);
        if ( v4 < 0x37 )
          continue;
      }
    }
    break;
  }
  *a3 = v4 << 7;
}
