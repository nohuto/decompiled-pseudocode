/*
 * XREFs of ?redloop@@YAHXZ @ 0x1C00DAE7C
 * Callers:
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C00DACDC (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 * Callees:
 *     ?greenloop@@YAHH@Z @ 0x1C00DAFC0 (-greenloop@@YAHH@Z.c)
 */

__int64 redloop(void)
{
  int v0; // r14d
  unsigned int v1; // ebx
  __int64 v2; // r13
  int v3; // edi
  __int64 v4; // r12
  int v5; // ebp
  int v6; // r15d
  int v7; // ecx
  int v8; // esi
  int v9; // edi
  int v10; // esi
  int v11; // ecx

  v0 = dword_1C0336014;
  v1 = 0;
  v2 = qword_1C0336040;
  v3 = dword_1C0336014;
  v4 = qword_1C0336058;
  v5 = dword_1C0336020;
  v6 = dword_1C033602C;
  v7 = 1;
  dword_1C033601C = dword_1C0336020;
  v8 = dword_1C033602C;
  qword_1C0336038 = qword_1C0336040;
  for ( qword_1C0336050 = qword_1C0336058; v3 < 32; v7 = 0 )
  {
    if ( (unsigned int)greenloop(v7) )
    {
      v1 = 1;
    }
    else if ( v1 )
    {
      break;
    }
    dword_1C033601C += v8;
    ++v3;
    qword_1C0336038 += 4096LL;
    v8 += 128;
    qword_1C0336050 += 1024LL;
  }
  v9 = v6 - 128;
  dword_1C03363B8 = v6 - 128;
  dword_1C033601C = v5 - (v6 - 128);
  v10 = v0 - 1;
  qword_1C0336038 = v2 - 4096;
  qword_1C0336050 = v4 - 1024;
  v11 = 1;
  if ( v0 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (unsigned int)greenloop(v11) )
      {
        v1 = 1;
      }
      else if ( v1 )
      {
LABEL_13:
        dword_1C03363B8 = v9;
        return v1;
      }
      qword_1C0336038 -= 4096LL;
      v9 -= 128;
      dword_1C033601C -= v9;
      v11 = 0;
      qword_1C0336050 -= 1024LL;
      if ( --v10 < 0 )
        goto LABEL_13;
    }
  }
  return v1;
}
