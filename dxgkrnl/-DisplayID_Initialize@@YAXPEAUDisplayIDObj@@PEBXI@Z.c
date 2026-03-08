/*
 * XREFs of ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0072224
 * Callers:
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x1C001F2CC (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x1C03CB8C0 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C03CBCC0 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 * Callees:
 *     ?ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ @ 0x1C0071B74 (-ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ.c)
 */

void __fastcall DisplayID_Initialize(struct DisplayIDObj *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r10
  char *v4; // r11
  int v5; // esi
  int v6; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int8 *v9; // rdi
  int v10; // r15d
  int v11; // r12d
  char v12; // r14
  __int64 v13; // r9
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    *((_DWORD *)a1 + 3) = 0;
    v3 = a2;
    *((_DWORD *)a1 + 5) = 0;
    *(_QWORD *)a1 = a2;
    *((_DWORD *)a1 + 2) = a3;
    *((_BYTE *)a1 + 16) = 0;
    if ( a2 )
    {
      if ( a3 )
      {
        v4 = (char *)&a2[a3];
        v5 = 0;
        if ( a2 + 3 < (unsigned __int8 *)v4 )
        {
          v6 = 0;
          while ( 1 )
          {
            v7 = v3[1];
            v8 = v4 - (char *)v3;
            v14[0] = v3;
            v14[1] = v4 - (char *)v3;
            v9 = v3;
            v10 = v6;
            v11 = (unsigned __int8)(v7 + 5);
            if ( &v3[(unsigned __int8)(v7 + 5)] > (unsigned __int8 *)v4 )
              break;
            if ( (unsigned __int8)((*v3 >> 4) - 1) > 1u )
              break;
            v12 = v3[2] & 0xF;
            if ( !v12 )
            {
              if ( v3[3] )
                break;
            }
            if ( (unsigned __int8)v7 > 0xFBu
              || v7 > v8 - 5
              || v8 < 5
              || DisplayID_Section_Parser::ComputeChecksum((DisplayID_Section_Parser *)v14) != v3[v7 + 4] )
            {
              break;
            }
            if ( v6 )
            {
              if ( v12 )
                return;
            }
            else
            {
              v5 = v9[3];
              *(_DWORD *)(v13 + 12) = v11;
            }
            *(_DWORD *)(v13 + 20) = ++v6;
            if ( v3 + 3 >= (unsigned __int8 *)v4 )
            {
              if ( v10 == v5 )
                *(_BYTE *)(v13 + 16) = 1;
              return;
            }
          }
        }
      }
    }
  }
}
