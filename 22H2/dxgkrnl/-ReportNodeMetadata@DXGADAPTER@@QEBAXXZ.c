/*
 * XREFs of ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C0196180
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019450C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C020F5FC (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqqz_EtwWriteTransfer @ 0x1C003A86C (McTemplateK0pqqz_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::ReportNodeMetadata(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]

  if ( *((int *)this + 582) < 0x2000 )
    v4 = 1;
  else
    v4 = *((_DWORD *)this + 70);
  v5 = 0;
  if ( v4 )
  {
    v6 = 0LL;
    do
    {
      v7 = *((_QWORD *)this + 323);
      if ( *(_QWORD *)(v6 + v7 + 32) )
      {
        v8 = *(unsigned __int16 *)(v6 + v7);
        v9 = 0;
        if ( *(_WORD *)(v6 + v7) )
        {
          v10 = 0LL;
          do
          {
            v11 = *(_QWORD *)(v6 + v7 + 32);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(v13) = *(_DWORD *)(v10 + v11);
              LODWORD(v12) = v9 | (v5 << 16);
              McTemplateK0pqqz_EtwWriteTransfer((unsigned int)v12, v11, a3, this, v12, v13, v10 + v11 + 4);
            }
            ++v9;
            v10 += 74LL;
          }
          while ( v9 < v8 );
        }
      }
      ++v5;
      v6 += 360LL;
    }
    while ( v5 < v4 );
  }
}
