/*
 * XREFs of ?IsExtendTopology@@YAHXZ @ 0x1C01A80A0
 * Callers:
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A8DC4 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 * Callees:
 *     <none>
 */

__int64 IsExtendTopology(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  char *v2; // rdi
  unsigned int v3; // ecx
  __int64 v4; // rdx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v6 = 0;
  if ( !(unsigned int)DrvGetDisplayConfigBufferSizes(18LL, &v6) && v6 > 1 )
  {
    v1 = Win32AllocPoolZInit(216LL * v6, 1665430357LL);
    v2 = (char *)v1;
    if ( v1 )
    {
      if ( !(unsigned int)DrvQueryDisplayConfig(18LL, &v6, v1, 0LL) )
      {
        v3 = 0;
        if ( v6 )
        {
          while ( 1 )
          {
            v4 = 216LL * v3;
            if ( *(_DWORD *)&v2[v4 + 116] || *(_DWORD *)&v2[v4 + 120] )
              break;
            if ( ++v3 >= v6 )
              goto LABEL_11;
          }
          v0 = 1;
        }
      }
LABEL_11:
      Win32FreePool(v2);
    }
  }
  return v0;
}
