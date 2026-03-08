/*
 * XREFs of ?WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@_KPEAG@Z @ 0x18027D3B4
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 *     ?Matrix4x4SubchannelAtIndex@MatrixSubchannelMaskInfo@@QEBAPEBGI@Z @ 0x18027D108 (-Matrix4x4SubchannelAtIndex@MatrixSubchannelMaskInfo@@QEBAPEBGI@Z.c)
 *     ?StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18027D210 (-StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 */

const void **MatrixSubchannelMaskInfo::WriteSubchannelString(__int64 a1, int a2, __int64 a3, ...)
{
  const void **result; // rax
  char v4; // r8
  unsigned int v5; // ebx
  size_t v6; // r11
  unsigned __int16 *v7; // r10
  wchar_t *v10; // rax
  HRESULT v11; // eax
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+48h] [rbp+0h] BYREF
  unsigned __int16 *v14; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, unsigned __int16 *);
  result = &retaddr;
  v4 = *(_BYTE *)(a1 + 4);
  v5 = 0;
  v6 = 49LL;
  v7 = v14;
  v12[0] = 49LL;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( a2 == 104 )
      {
        if ( ((*(_QWORD *)(a1 + 8) >> (4 * (v4 - (unsigned __int8)v5) - 4)) & 0xF) != 0 )
        {
          switch ( (*(_QWORD *)(a1 + 8) >> (4 * (v4 - (unsigned __int8)v5) - 4)) & 0xF )
          {
            case 1LL:
              v10 = L"_12";
              break;
            case 2LL:
              v10 = L"_21";
              break;
            case 3LL:
              v10 = L"_22";
              break;
            case 4LL:
              v10 = L"_31";
              break;
            default:
              v10 = ((*(_QWORD *)(a1 + 8) >> (4 * (v4 - (unsigned __int8)v5) - 4)) & 0xF) == 5 ? L"_32" : 0LL;
              break;
          }
        }
        else
        {
          v10 = L"_11";
        }
      }
      else
      {
        v10 = (wchar_t *)MatrixSubchannelMaskInfo::Matrix4x4SubchannelAtIndex((MatrixSubchannelMaskInfo *)a1, v5);
      }
      v11 = StringCchCatExW(v7, v6, v10, (unsigned __int16 **)va, v12);
      if ( v11 < 0 )
        ModuleFailFastForHRESULT(v11, retaddr);
      result = (const void **)*(unsigned __int8 *)(a1 + 4);
      ++v5;
      v4 = *(_BYTE *)(a1 + 4);
      if ( v5 >= (unsigned int)result )
        break;
      v7 = v14;
      v6 = v12[0];
    }
  }
  return result;
}
