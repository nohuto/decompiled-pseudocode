/*
 * XREFs of ?CheckForCycle@CBrushMarshaler@DirectComposition@@AEAA_NPEAV12@@Z @ 0x1C0068BEC
 * Callers:
 *     ?SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAVCResourceMarshaler@2@W4MIL_RESOURCE_TYPE@@KPEA_N@Z @ 0x1C0064ED0 (-SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CBrushMarshaler::CheckForCycle(
        DirectComposition::CBrushMarshaler *this,
        struct DirectComposition::CBrushMarshaler *a2)
{
  unsigned int *v4; // rbx
  char v5; // di
  __int64 v6; // rdx
  unsigned int **v7; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  *((_QWORD *)a2 + 7) = 0LL;
  v4 = (unsigned int *)a2;
  *((_DWORD *)a2 + 16) = 0;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = v4[16];
      if ( v4 == (unsigned int *)this )
        v5 = 1;
      v9 = 0LL;
      if ( v5
        || !(*(unsigned __int8 (__fastcall **)(unsigned int *, __int64, __int64 *))(*(_QWORD *)v4 + 288LL))(v4, v6, &v9) )
      {
        break;
      }
      ++v4[16];
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 56) )
        {
          v5 = 1;
        }
        else
        {
          *(_QWORD *)(v9 + 56) = v4;
          *(_DWORD *)(v9 + 64) = 0;
          v4 = (unsigned int *)v9;
        }
      }
    }
    v4[16] = 0;
    v7 = (unsigned int **)(v4 + 14);
    if ( v4 == (unsigned int *)a2 )
      break;
    v4 = *v7;
    *v7 = 0LL;
  }
  *v7 = 0LL;
  return v5;
}
