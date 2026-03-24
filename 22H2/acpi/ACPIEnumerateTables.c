/*
 * XREFs of ACPIEnumerateTables @ 0x1C00A2E40
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x1C0002940 (ACPIEnumMapTableHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIEnumerateTables(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  _DWORD **v8; // r9
  __int64 v9; // r10
  _DWORD *v10; // rax

  v4 = 0;
  v5 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  if ( v5 && (v6 = *v5) != 0 )
  {
    v7 = 4 * v6;
    if ( a2 )
    {
      if ( *a2 < v7 )
      {
        *a2 = v7;
        return (unsigned int)-1073741789;
      }
      else
      {
        if ( v6 )
        {
          v8 = (_DWORD **)(v5 + 2);
          v9 = v6;
          do
          {
            v10 = *v8++;
            *a1++ = *v10;
            --v9;
          }
          while ( v9 );
        }
        *a2 = v7;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x1Eu,
        (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids);
    return (unsigned int)-1072431079;
  }
  return v4;
}
