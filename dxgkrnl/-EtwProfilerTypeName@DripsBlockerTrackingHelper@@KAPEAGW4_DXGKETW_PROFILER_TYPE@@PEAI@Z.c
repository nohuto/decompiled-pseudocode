const wchar_t *__fastcall DripsBlockerTrackingHelper::EtwProfilerTypeName(int a1, _DWORD *a2)
{
  const wchar_t *result; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx

  if ( a1 <= 5000 )
  {
    if ( a1 == 5000 )
    {
      *a2 = 20;
      return L"DdiQueryAdapterInfo";
    }
    if ( a1 > 2144 )
    {
      if ( a1 > 3000 )
      {
        if ( a1 > 4000 )
        {
          switch ( a1 )
          {
            case 4001:
              *a2 = 22;
              result = L"DpiDxgkDdiStartDevice";
              break;
            case 4002:
              *a2 = 21;
              result = L"DpiDxgkDdiStopDevice";
              break;
            case 4003:
              *a2 = 23;
              result = L"DpiDxgkDdiRemoveDevice";
              break;
            case 4004:
              *a2 = 28;
              result = L"DpiDxgkDdiDispatchIoRequest";
              break;
            case 4005:
              *a2 = 30;
              result = L"DpiDxgkDdiQueryChildRelations";
              break;
            case 4006:
              *a2 = 27;
              result = L"DpiDxgkDdiQueryChildStatus";
              break;
            case 4007:
              result = L"DpiDxgkDdiQueryDeviceDescriptor";
              goto LABEL_723;
            case 4008:
              *a2 = 24;
              result = L"DpiDxgkDdiSetPowerState";
              break;
            case 4009:
              *a2 = 26;
              result = L"DpiDxgkDdiNotifyAcpiEvent";
              break;
            case 4010:
              *a2 = 17;
              result = L"DpiDxgkDdiUnload";
              break;
            case 4011:
              *a2 = 28;
              result = L"DpiDxgkDdiControlEtwLogging";
              break;
            case 4012:
              *a2 = 25;
              result = L"DpiDxgkDdiQueryInterface";
              break;
            case 4013:
              *a2 = 13;
              result = L"DpiDpcForIsr";
              break;
            case 4014:
              *a2 = 30;
              result = L"DpiFdoMessageInterruptRoutine";
              break;
            case 4015:
              *a2 = 25;
              result = L"VidSchDdiNotifyInterrupt";
              break;
            case 4016:
              result = L"VidSchiCallNotifyInterruptAtISR";
              goto LABEL_723;
            case 4017:
              *a2 = 51;
              result = L"DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership";
              break;
            case 4018:
              *a2 = 30;
              result = L"DpiDxgkDdiGetChildContainerId";
              break;
            case 4019:
              *a2 = 35;
              result = L"DpiDxgkDdiDdiNotifySurpriseRemoval";
              break;
            case 4020:
              *a2 = 27;
              result = L"DpiFdoThermalActiveCooling";
              break;
            case 4021:
              *a2 = 28;
              result = L"DpiFdoThermalPassiveCooling";
              break;
            case 4022:
              *a2 = 26;
              result = L"DxgkCbIndicateChildStatus";
              break;
            case 4023:
              *a2 = 19;
              result = L"DpiPNPPowerRelated";
              break;
            case 4024:
              result = L"VidSchiDeferredVisibilityThread";
              goto LABEL_723;
            default:
              goto LABEL_716;
          }
        }
        else if ( a1 == 4000 )
        {
          *a2 = 20;
          return L"DpiDxgkDdiAddDevice";
        }
        else
        {
          switch ( a1 )
          {
            case 3001:
              *a2 = 15;
              result = L"DxgkCddDestroy";
              break;
            case 3002:
              *a2 = 14;
              result = L"DxgkCddEnable";
              break;
            case 3003:
              *a2 = 15;
              result = L"DxgkCddDisable";
              break;
            case 3004:
              *a2 = 26;
              result = L"DxgkCddGetDisplayModeList";
              break;
            case 3005:
              *a2 = 21;
              result = L"DxgkCddGetDriverCaps";
              break;
            case 3006:
              *a2 = 12;
              result = L"DxgkCddLock";
              break;
            case 3007:
              *a2 = 14;
              result = L"DxgkCddUnlock";
              break;
            case 3008:
              *a2 = 15;
              result = L"DxgkCddPresent";
              break;
            case 3009:
              *a2 = 20;
              result = L"DxgkCddSetGammaRamp";
              break;
            case 3010:
              *a2 = 18;
              result = L"DxgkCddSetPalette";
              break;
            case 3011:
              *a2 = 26;
              result = L"DxgkCddSetPointerPosition";
              break;
            case 3012:
              *a2 = 23;
              result = L"DxgkCddSetPointerShape";
              break;
            case 3013:
              *a2 = 23;
              result = L"DxgkCddTerminateThread";
              break;
            case 3014:
              *a2 = 17;
              result = L"DxgkCddSetOrigin";
              break;
            case 3015:
              *a2 = 33;
              result = L"DxgkCddWaitForVerticalBlankEvent";
              break;
            case 3016:
              *a2 = 21;
              result = L"DxgkCddSyncGPUAccess";
              break;
            case 3017:
              *a2 = 24;
              result = L"DxgkCddCreateAllocation";
              break;
            case 3018:
              *a2 = 25;
              result = L"DxgkCddDestroyAllocation";
              break;
            case 3019:
              *a2 = 20;
              result = L"DxgkCddBltToPrimary";
              break;
            case 3020:
              *a2 = 18;
              result = L"DxgkCddGdiCommand";
              break;
            case 3021:
              *a2 = 17;
              result = L"DxgkCddDrvBitBlt";
              break;
            case 3022:
              *a2 = 20;
              result = L"DxgkCddDrvColorFill";
              break;
            case 3023:
              *a2 = 21;
              result = L"DxgkCddDrvStrokePath";
              break;
            case 3024:
              *a2 = 21;
              result = L"DxgkCddDrvAlphaBlend";
              break;
            case 3025:
              *a2 = 17;
              result = L"DxgkCddDrvLineTo";
              break;
            case 3026:
              *a2 = 19;
              result = L"DxgkCddDrvFillPath";
              break;
            case 3027:
              *a2 = 28;
              result = L"DxgkCddDrvStrokeAndFillPath";
              break;
            case 3028:
              *a2 = 24;
              result = L"DxgkCddDrvStretchBltROP";
              break;
            case 3029:
              *a2 = 17;
              result = L"DxgkCddDrvPlgBlt";
              break;
            case 3030:
              *a2 = 21;
              result = L"DxgkCddDrvStretchBlt";
              break;
            case 3031:
              *a2 = 18;
              result = L"DxgkCddDrvTextOut";
              break;
            case 3032:
              *a2 = 23;
              result = L"DxgkCddDrvGradientFill";
              break;
            case 3033:
              *a2 = 25;
              result = L"DxgkCddDrvTransparentBlt";
              break;
            case 3034:
              *a2 = 20;
              result = L"DxgkCddOpenResource";
              break;
            case 3035:
              *a2 = 25;
              result = L"DxgkCddQueryResourceInfo";
              break;
            case 3036:
              *a2 = 28;
              result = L"DxgkCddSubmitPresentHistory";
              break;
            case 3037:
              *a2 = 26;
              result = L"DxgkCddCreateDeviceBitmap";
              break;
            case 3038:
              *a2 = 20;
              result = L"DxgkCddUpdateGdiMem";
              break;
            case 3039:
              *a2 = 18;
              result = L"DxgkCddAddCommand";
              break;
            case 3040:
              *a2 = 18;
              result = L"DxgkCddEnableLite";
              break;
            case 3041:
              *a2 = 26;
              result = L"DxgkCddAssertModeInternal";
              break;
            case 3042:
              *a2 = 25;
              result = L"DxgkCddSetLiteModeChange";
              break;
            case 3043:
              *a2 = 26;
              result = L"DxgkCddPresentDisplayOnly";
              break;
            case 3044:
              *a2 = 24;
              result = L"DxgkCddSignalGdiContext";
              break;
            case 3045:
              *a2 = 22;
              result = L"DxgkCddWaitGdiContext";
              break;
            case 3046:
              *a2 = 23;
              result = L"DxgkCddSignalDxContext";
              break;
            case 3047:
              *a2 = 21;
              result = L"DxgkCddWaitDxContext";
              break;
            case 3048:
              *a2 = 22;
              result = L"DxgkCddStartDxInterop";
              break;
            case 3049:
              *a2 = 20;
              result = L"DxgkCddEndDxInterop";
              break;
            case 3050:
              *a2 = 23;
              result = L"DxgkCddAddD3DDirtyRect";
              break;
            case 3051:
              *a2 = 26;
              result = L"DxgkCddDxGdiInteropFailed";
              break;
            case 3052:
              *a2 = 20;
              result = L"DxgkCddSyncDxAccess";
              break;
            case 3053:
              *a2 = 21;
              result = L"DxgkCddFlushCpuCache";
              break;
            case 3054:
              *a2 = 20;
              result = L"DxgkCddLockMdlPages";
              break;
            case 3055:
              result = L"DxgkCddOpenResourceFromNtHandle";
              goto LABEL_723;
            case 3056:
              *a2 = 37;
              result = L"DxgkCddQueryResourceInfoFromNtHandle";
              break;
            case 3057:
              *a2 = 22;
              result = L"DxgkCddUnlockMdlPages";
              break;
            case 3058:
              *a2 = 23;
              result = L"DxgkCddTrimStagingSize";
              break;
            case 3059:
              *a2 = 27;
              result = L"DxgkCddReuseDeviceBitmapEx";
              break;
            case 3060:
              *a2 = 20;
              result = L"DxgkCddMakeResident";
              break;
            case 3061:
              *a2 = 13;
              result = L"DxgkCddEvict";
              break;
            default:
              goto LABEL_716;
          }
        }
      }
      else if ( a1 == 3000 )
      {
        *a2 = 14;
        return L"DxgkCddCreate";
      }
      else
      {
        switch ( a1 )
        {
          case 2145:
            *a2 = 19;
            result = L"DxgkGetOverlayCaps";
            break;
          case 2146:
            *a2 = 27;
            result = L"DxgkGetPostCompositionCaps";
            break;
          case 2147:
            *a2 = 22;
            result = L"DxgkPresentRedirected";
            break;
          case 2148:
            *a2 = 27;
            result = L"DxgkCreateProtectedSession";
            break;
          case 2149:
            *a2 = 28;
            result = L"DxgkDestroyProtectedSession";
            break;
          case 2150:
            result = L"DxgkQueryProtectedSessionStatus";
            goto LABEL_723;
          case 2151:
            *a2 = 42;
            result = L"DxgkQueryProtectedSessionInfoFromNtHandle";
            break;
          case 2152:
            *a2 = 37;
            result = L"DxgkOpenProtectedSessionFromNtHandle";
            break;
          case 2153:
            *a2 = 18;
            result = L"DxgkCreateHwQueue";
            break;
          case 2154:
            *a2 = 19;
            result = L"DxgkDestroyHwQueue";
            break;
          case 2155:
            *a2 = 35;
            result = L"DxgkSetProcessDeviceRemovalSupport";
            break;
          case 2156:
            *a2 = 35;
            result = L"DxgkGetProcessDeviceRemovalSupport";
            break;
          case 2157:
            *a2 = 23;
            result = L"DxgkCreateBundleObject";
            break;
          case 2158:
            *a2 = 24;
            result = L"DxgkExtractBundleObject";
            break;
          case 2159:
            *a2 = 31;
            result = L"DxgkOpenKeyedMutexFromNtHandle";
            break;
          case 2160:
            *a2 = 27;
            result = L"DxgkSubmitCommandToHwQueue";
            break;
          case 2161:
            *a2 = 37;
            result = L"DxgkSubmitSignalSyncObjectsToHwQueue";
            break;
          case 2162:
            *a2 = 38;
            result = L"DxgkSubmitWaitForSyncObjectsToHwQueue";
            break;
          case 2163:
            *a2 = 30;
            result = L"DxgkPresentMultiPlaneOverlay2";
            break;
          case 2164:
            *a2 = 30;
            result = L"DxgkPresentMultiPlaneOverlay3";
            break;
          case 2165:
            *a2 = 33;
            result = L"DxgkInvalidateMonitorConnections";
            break;
          case 2166:
            *a2 = 27;
            result = L"DxgkGetMonitorDeviceObject";
            break;
          case 2167:
            *a2 = 25;
            result = L"DxgkPersistPathsModality";
            break;
          case 2168:
            *a2 = 31;
            result = L"DxgkFunctionalizePathsModality";
            break;
          case 2169:
            *a2 = 23;
            result = L"DxgkApplyPathsModality";
            break;
          case 2170:
            *a2 = 26;
            result = L"DxgkFinalizePathsModality";
            break;
          case 2171:
            *a2 = 35;
            result = L"DxgkEnumerateModesForPathsModality";
            break;
          case 2172:
            *a2 = 18;
            result = L"DxgkUpdateGdiInfo";
            break;
          case 2173:
            *a2 = 31;
            result = L"DxgkCompleteTopologyTransition";
            break;
          case 2174:
            result = L"DxgkGetDisplayConfigBufferSizes";
            goto LABEL_723;
          case 2175:
            *a2 = 28;
            result = L"DxgkIsSourceInHardwareClone";
            break;
          case 2176:
            *a2 = 23;
            result = L"DxgkQueryDisplayConfig";
            break;
          case 2177:
            *a2 = 40;
            result = L"DxgkConvertPathsModalityToDisplayConfig";
            break;
          case 2178:
            *a2 = 34;
            result = L"DxgkConvertDisplayConfigToDevMode";
            break;
          case 2179:
            *a2 = 33;
            result = L"DxgkHandleForceProjectionMonitor";
            break;
          case 2180:
            *a2 = 26;
            result = L"DxgkIsPortraitFirstTarget";
            break;
          case 2181:
            *a2 = 18;
            result = L"DxgkDesktopSwitch";
            break;
          case 2182:
            result = L"DxgkIsVidPnSourceOwnerExclusive";
            goto LABEL_723;
          case 2183:
            *a2 = 17;
            result = L"DxgkDisplayOnOff";
            break;
          case 2184:
            *a2 = 28;
            result = L"DxgkDisplayConfigDeviceInfo";
            break;
          case 2185:
            *a2 = 25;
            result = L"DxgkGetAdapterDeviceDesc";
            break;
          case 2186:
            *a2 = 27;
            result = L"DxgkGetMonitorInternalInfo";
            break;
          case 2187:
            *a2 = 25;
            result = L"DxgkGetMonitorDescriptor";
            break;
          case 2188:
            *a2 = 28;
            result = L"DxgkBeginTopologyTransition";
            break;
          case 2189:
            *a2 = 24;
            result = L"DxgkFlushPresentHistory";
            break;
          case 2190:
            *a2 = 39;
            result = L"DxgkSignalSynchronizationObjectFromGpu";
            break;
          case 2191:
            *a2 = 40;
            result = L"DxgkSignalSynchronizationObjectFromGpu2";
            break;
          case 2192:
            *a2 = 29;
            result = L"DxgkGetDWMVerticalBlankEvent";
            break;
          case 2193:
            *a2 = 28;
            result = L"DxgkGetDpiOverrideForSource";
            break;
          case 2194:
            *a2 = 22;
            result = L"DxgkProcessLockScreen";
            break;
          case 2195:
            *a2 = 23;
            result = L"DxgkStatusChangeNotify";
            break;
          case 2196:
            *a2 = 21;
            result = L"DxgkSessionConnected";
            break;
          case 2197:
            *a2 = 27;
            result = L"DxgkPreSessionDisconnected";
            break;
          case 2198:
            *a2 = 24;
            result = L"DxgkSessionDisconnected";
            break;
          case 2199:
            *a2 = 23;
            result = L"DxgkSessionReconnected";
            break;
          case 2200:
            *a2 = 26;
            result = L"DxgkAddSurfaceToSwapChain";
            break;
          case 2201:
            *a2 = 31;
            result = L"DxgkRemoveSurfaceFromSwapChain";
            break;
          case 2202:
            *a2 = 30;
            result = L"DxgkUnOrderedPresentSwapChain";
            break;
          case 2203:
            *a2 = 19;
            result = L"DxgkGetProcessList";
            break;
          case 2204:
            *a2 = 35;
            result = L"DxgkOpenSyncObjectNtHandleFromName";
            break;
          case 2205:
            *a2 = 37;
            result = L"DxgkOpenBundleObjectNtHandleFromName";
            break;
          case 2206:
            *a2 = 26;
            result = L"DxgkCreateTrackedWorkload";
            break;
          case 2207:
            *a2 = 27;
            result = L"DxgkDestroyTrackedWorkload";
            break;
          case 2208:
            *a2 = 20;
            result = L"DxgkDuplicateHandle";
            break;
          case 2209:
            *a2 = 29;
            result = L"DxgkpProcessVSyncPhaseThread";
            break;
          case 2210:
            *a2 = 26;
            result = L"DxgkTrimProcessCommitment";
            break;
          case 2211:
            *a2 = 29;
            result = L"DxgkpProcessStatusChangeWork";
            break;
          case 2214:
            *a2 = 24;
            result = L"DxgkRegisterVailProcess";
            break;
          case 2215:
            *a2 = 34;
            result = L"DxgkVailPromoteCompositionSurface";
            break;
          case 2216:
            *a2 = 16;
            result = L"DxgkVailConnect";
            break;
          case 2217:
            *a2 = 18;
            result = L"DxgkVailDisonnect";
            break;
          case 2218:
            *a2 = 26;
            result = L"DxgkVmBusSendAsyncMessage";
            break;
          default:
            goto LABEL_716;
        }
      }
    }
    else
    {
      if ( a1 == 2144 )
      {
        *a2 = 26;
        return L"DxgkGetMemoryBudgetTarget";
      }
      if ( a1 > 2064 )
      {
        switch ( a1 )
        {
          case 2065:
            *a2 = 34;
            result = L"DxgkOutputDuplGetPointerShapeData";
            break;
          case 2066:
            *a2 = 22;
            result = L"DxgkCreateKeyedMutex2";
            break;
          case 2067:
            *a2 = 20;
            result = L"DxgkOpenKeyedMutex2";
            break;
          case 2068:
            *a2 = 23;
            result = L"DxgkAcquireKeyedMutex2";
            break;
          case 2069:
            *a2 = 23;
            result = L"DxgkReleaseKeyedMutex2";
            break;
          case 2070:
            *a2 = 21;
            result = L"DxgkOfferAllocations";
            break;
          case 2071:
            *a2 = 23;
            result = L"DxgkReclaimAllocations";
            break;
          case 2072:
            *a2 = 27;
            result = L"DxgkOutputDuplReleaseFrame";
            break;
          case 2073:
            *a2 = 34;
            result = L"DxgkQueryResourceInfoFromNtHandle";
            break;
          case 2074:
            *a2 = 17;
            result = L"DxgkShareObjects";
            break;
          case 2075:
            *a2 = 25;
            result = L"DxgkOpenNtHandleFromName";
            break;
          case 2076:
            *a2 = 29;
            result = L"DxgkOpenResourceFromNtHandle";
            break;
          case 2077:
            *a2 = 25;
            result = L"DxgkSetVidPnSourceOwner1";
            break;
          case 2078:
            *a2 = 17;
            result = L"DxgkEnumAdapters";
            break;
          case 2079:
            *a2 = 27;
            result = L"DxgkPinDirectFlipResources";
            break;
          case 2080:
            *a2 = 29;
            result = L"DxgkUnpinDirectFlipResources";
            break;
          case 2081:
            *a2 = 21;
            result = L"DxgkGetPathsModality";
            break;
          case 2082:
            *a2 = 24;
            result = L"DxgkOpenAdapterFromLuid";
            break;
          case 2083:
            *a2 = 31;
            result = L"DxgkWaitForVerticalBlankEvent2";
            break;
          case 2084:
            *a2 = 42;
            result = L"DxgkSetContextInProcessSchedulingPriority";
            break;
          case 2085:
            *a2 = 42;
            result = L"DxgkGetContextInProcessSchedulingPriority";
            break;
          case 2086:
            *a2 = 31;
            result = L"DxgkOpenSyncObjectFromNtHandle";
            break;
          case 2087:
            *a2 = 31;
            result = L"DxgkNotifyProcessFreezeCallout";
            break;
          case 2088:
            *a2 = 33;
            result = L"DxgkGetSharedResourceAdapterLuid";
            break;
          case 2089:
            *a2 = 21;
            result = L"DxgkSetStereoEnabled";
            break;
          case 2090:
            *a2 = 30;
            result = L"DxgkGetCachedHybridQueryValue";
            break;
          case 2091:
            *a2 = 26;
            result = L"DxgkCacheHybridQueryValue";
            break;
          case 2092:
            *a2 = 29;
            result = L"DxgkPresentMultiPlaneOverlay";
            break;
          case 2093:
            *a2 = 34;
            result = L"DxgkCheckMultiplaneOverlaySupport";
            break;
          case 2094:
            *a2 = 27;
            result = L"DxgkSetIndependentFlipMode";
            break;
          case 2095:
            *a2 = 17;
            result = L"DxgkConfirmToken";
            break;
          case 2096:
            *a2 = 29;
            result = L"DxgkNotifyProcessThawCallout";
            break;
          case 2097:
            *a2 = 25;
            result = L"DxgkSetPresenterViewMode";
            break;
          case 2098:
            *a2 = 29;
            result = L"DxgkReserveGpuVirtualAddress";
            break;
          case 2099:
            *a2 = 26;
            result = L"DxgkFreeGpuVirtualAddress";
            break;
          case 2100:
            *a2 = 25;
            result = L"DxgkMapGpuVirtualAddress";
            break;
          case 2101:
            *a2 = 25;
            result = L"DxgkCreateContextVirtual";
            break;
          case 2102:
            *a2 = 18;
            result = L"DxgkSubmitCommand";
            break;
          case 2103:
            *a2 = 10;
            result = L"DxgkLock2";
            break;
          case 2104:
            *a2 = 12;
            result = L"DxgkUnlock2";
            break;
          case 2105:
            *a2 = 23;
            result = L"DxgkDestroyAllocation2";
            break;
          case 2106:
            *a2 = 28;
            result = L"DxgkUpdateGpuVirtualAddress";
            break;
          case 2107:
            *a2 = 35;
            result = L"DxgkCheckMultiplaneOverlaySupport2";
            break;
          case 2108:
            *a2 = 20;
            result = L"DxgkCreateSwapChain";
            break;
          case 2109:
            *a2 = 18;
            result = L"DxgkOpenSwapChain";
            break;
          case 2110:
            *a2 = 21;
            result = L"DxgkDestroySwapChain";
            break;
          case 2111:
            *a2 = 21;
            result = L"DxgkAcquireSwapChain";
            break;
          case 2112:
            *a2 = 21;
            result = L"DxgkReleaseSwapChain";
            break;
          case 2113:
            *a2 = 21;
            result = L"DxgkAbandonSwapChain";
            break;
          case 2114:
            *a2 = 28;
            result = L"DxgkSetDodIndirectSwapchain";
            break;
          case 2115:
            *a2 = 17;
            result = L"DxgkMakeResident";
            break;
          case 2116:
            *a2 = 10;
            result = L"DxgkEvict";
            break;
          case 2117:
            *a2 = 22;
            result = L"DxgkCreatePagingQueue";
            break;
          case 2118:
            *a2 = 23;
            result = L"DxgkDestroyPagingQueue";
            break;
          case 2119:
            *a2 = 25;
            result = L"DxgkQueryVideoMemoryInfo";
            break;
          case 2120:
            *a2 = 33;
            result = L"DxgkChangeVideoMemoryReservation";
            break;
          case 2121:
            *a2 = 28;
            result = L"DxgkGetSetSwapChainMetadata";
            break;
          case 2122:
            *a2 = 20;
            result = L"DxgkInvalidateCache";
            break;
          case 2123:
            *a2 = 40;
            result = L"DxgkGetResourcePresentPrivateDriverData";
            break;
          case 2124:
            *a2 = 24;
            result = L"DxgkSetStablePowerState";
            break;
          case 2125:
            *a2 = 26;
            result = L"DxgkQueryClockCalibration";
            break;
          case 2126:
            *a2 = 29;
            result = L"QueryVidPnExclusiveOwnership";
            break;
          case 2127:
            *a2 = 26;
            result = L"DxgkAdjustFullscreenGamma";
            break;
          case 2128:
            *a2 = 29;
            result = L"DxgkWin32kSetPointerPosition";
            break;
          case 2129:
            *a2 = 26;
            result = L"DxgkWin32kSetPointerShape";
            break;
          case 2130:
            *a2 = 31;
            result = L"DxgkSetVidPnSourceHwProtection";
            break;
          case 2131:
            *a2 = 22;
            result = L"DxgkMarkDeviceAsError";
            break;
          case 2132:
            *a2 = 29;
            result = L"DxgkUpdateAllocationProperty";
            break;
          case 2133:
            *a2 = 16;
            result = L"DxgkSetFSEBlock";
            break;
          case 2134:
            *a2 = 18;
            result = L"DxgkQueryFSEBlock";
            break;
          case 2135:
            *a2 = 23;
            result = L"DxgkVmBusCreateChannel";
            break;
          case 2136:
            *a2 = 25;
            result = L"DxgkVmBusSendSyncMessage";
            break;
          case 2137:
            *a2 = 24;
            result = L"DxgkVmBusProcessMessage";
            break;
          case 2138:
            *a2 = 26;
            result = L"DxgkGetAllocationPriority";
            break;
          case 2139:
            *a2 = 23;
            result = L"DxgkSetYieldPercentage";
            break;
          case 2140:
            *a2 = 37;
            result = L"DxgkSetProcessSchedulingPriorityBand";
            break;
          case 2141:
            *a2 = 26;
            result = L"DxgkSetMemoryBudgetTarget";
            break;
          case 2142:
            *a2 = 23;
            result = L"DxgkGetYieldPercentage";
            break;
          case 2143:
            *a2 = 37;
            result = L"DxgkGetProcessSchedulingPriorityBand";
            break;
          default:
            goto LABEL_716;
        }
      }
      else
      {
        if ( a1 == 2064 )
        {
          *a2 = 26;
          return L"DxgkOutputDuplGetMetaData";
        }
        if ( a1 > 2024 )
        {
          switch ( a1 )
          {
            case 2025:
              *a2 = 19;
              result = L"DxgkDestroyOverlay";
              break;
            case 2026:
              *a2 = 30;
              result = L"DxgkWaitForVerticalBlankEvent";
              break;
            case 2027:
              *a2 = 24;
              result = L"DxgkSetVidPnSourceOwner";
              break;
            case 2028:
              *a2 = 19;
              result = L"DxgkGetDeviceState";
              break;
            case 2029:
              *a2 = 33;
              result = L"DxgkSetContextSchedulingPriority";
              break;
            case 2030:
              *a2 = 33;
              result = L"DxgkGetContextSchedulingPriority";
              break;
            case 2031:
              *a2 = 38;
              result = L"DxgkSetProcessSchedulingPriorityClass";
              break;
            case 2032:
              *a2 = 38;
              result = L"DxgkGetProcessSchedulingPriorityClass";
              break;
            case 2033:
              *a2 = 36;
              result = L"DxgkReleaseProcessVidPnSourceOwners";
              break;
            case 2034:
              *a2 = 16;
              result = L"DxgkGetScanLine";
              break;
            case 2035:
              *a2 = 19;
              result = L"DxgkSetQueuedLimit";
              break;
            case 2036:
              *a2 = 24;
              result = L"DxgkPollDisplayChildren";
              break;
            case 2037:
              *a2 = 26;
              result = L"DxgkInvalidateActiveVidPn";
              break;
            case 2038:
              *a2 = 19;
              result = L"DxgkCheckOcclusion";
              break;
            case 2039:
              *a2 = 18;
              result = L"DxgkCreateContext";
              break;
            case 2040:
              *a2 = 19;
              result = L"DxgkDestroyContext";
              break;
            case 2041:
              result = L"DxgkCreateSynchronizationObject";
              goto LABEL_723;
            case 2042:
              *a2 = 33;
              result = L"DxgkDestroySynchronizationObject";
              break;
            case 2043:
              *a2 = 33;
              result = L"DxgkWaitForSynchronizationObject";
              break;
            case 2044:
              result = L"DxgkSignalSynchronizationObject";
              goto LABEL_723;
            case 2045:
              *a2 = 16;
              result = L"DxgkWaitForIdle";
              break;
            case 2046:
              *a2 = 27;
              result = L"DxgkCheckMonitorPowerState";
              break;
            case 2047:
              *a2 = 28;
              result = L"DxgkCheckExclusiveOwnership";
              break;
            case 2048:
              *a2 = 34;
              result = L"DxgkSetDisplayPrivateDriverFormat";
              break;
            case 2049:
              *a2 = 20;
              result = L"DxgkQueryStatistics";
              break;
            case 2050:
              *a2 = 30;
              result = L"DxgkOpenSynchronizationObject";
              break;
            case 2051:
              *a2 = 21;
              result = L"DxgkCreateKeyedMutex";
              break;
            case 2052:
              *a2 = 19;
              result = L"DxgkOpenKeyedMutex";
              break;
            case 2053:
              *a2 = 22;
              result = L"DxgkDestroyKeyedMutex";
              break;
            case 2054:
              *a2 = 22;
              result = L"DxgkAcquireKeyedMutex";
              break;
            case 2055:
              *a2 = 22;
              result = L"DxgkReleaseKeyedMutex";
              break;
            case 2056:
              *a2 = 28;
              result = L"DxgkConfigureSharedResource";
              break;
            case 2057:
              *a2 = 20;
              result = L"DxgkGetOverlayState";
              break;
            case 2058:
              *a2 = 33;
              result = L"DxgkCheckVidPnExclusiveOwnership";
              break;
            case 2059:
              *a2 = 30;
              result = L"DxgkCheckSharedResourceAccess";
              break;
            case 2060:
              *a2 = 22;
              result = L"DxgkGetPresentHistory";
              break;
            case 2061:
              *a2 = 21;
              result = L"DxgkCreateOutputDupl";
              break;
            case 2062:
              *a2 = 22;
              result = L"DxgkDestroyOutputDupl";
              break;
            case 2063:
              *a2 = 27;
              result = L"DxgkOutputDuplGetFrameInfo";
              break;
            default:
              goto LABEL_716;
          }
        }
        else
        {
          if ( a1 == 2024 )
          {
            *a2 = 16;
            return L"DxgkFlipOverlay";
          }
          if ( a1 <= 2004 )
          {
            if ( a1 == 2004 )
            {
              *a2 = 22;
              return L"DxgkQueryResourceInfo";
            }
            if ( a1 > 1004 )
            {
              v3 = a1 - 1005;
              if ( !v3 )
              {
                *a2 = 15;
                return L"DpiDispatchPnp";
              }
              v4 = v3 - 1;
              if ( !v4 )
              {
                *a2 = 17;
                return L"DpiDispatchPower";
              }
              v5 = v4 - 1;
              if ( !v5 )
              {
                *a2 = 25;
                return L"DpiDispatchSystemControl";
              }
              v6 = v5 - 1;
              if ( !v6 )
              {
                *a2 = 16;
                return L"DpiDriverUnload";
              }
              v7 = v6 - 1;
              if ( !v7 )
              {
                *a2 = 27;
                return L"DxgkAcquireAdapterCoreSync";
              }
              v8 = v7 - 991;
              if ( !v8 )
              {
                *a2 = 19;
                return L"DxgkProcessCallout";
              }
              v9 = v8 - 1;
              if ( !v9 )
              {
                *a2 = 16;
                return L"DxgkOpenAdapter";
              }
              v10 = v9 - 1;
              if ( !v10 )
              {
                *a2 = 17;
                return L"DxgkCloseAdapter";
              }
              if ( v10 == 1 )
              {
                *a2 = 21;
                return L"DxgkCreateAllocation";
              }
            }
            else
            {
              switch ( a1 )
              {
                case 1004:
                  *a2 = 17;
                  return L"DpiDispatchIoctl";
                case -1:
                  *a2 = 8;
                  return L"Unknown";
                case 0:
                  *a2 = 12;
                  return L"DriverEntry";
                case 1:
                  *a2 = 16;
                  return L"DxgkCreateClose";
                case 2:
                  *a2 = 24;
                  return L"DxgkInternalDeviceIoctl";
                case 3:
                  *a2 = 18;
                  return L"DxgkProcessNotify";
                case 1000:
                  *a2 = 13;
                  return L"DpiAddDevice";
                case 1001:
                  *a2 = 17;
                  return L"DpiDispatchClose";
                case 1002:
                  *a2 = 18;
                  return L"DpiDispatchCreate";
                case 1003:
                  *a2 = 25;
                  return L"DpiDispatchInternalIoctl";
              }
            }
            goto LABEL_716;
          }
          switch ( a1 )
          {
            case 2005:
              *a2 = 17;
              result = L"DxgkOpenResource";
              break;
            case 2006:
              *a2 = 22;
              result = L"DxgkDestroyAllocation";
              break;
            case 2007:
              *a2 = 26;
              result = L"DxgkSetAllocationPriority";
              break;
            case 2008:
              *a2 = 29;
              result = L"DxgkQueryAllocationResidency";
              break;
            case 2009:
              *a2 = 17;
              result = L"DxgkCreateDevice";
              break;
            case 2010:
              *a2 = 18;
              result = L"DxgkDestroyDevice";
              break;
            case 2011:
              *a2 = 9;
              result = L"DxgkLock";
              break;
            case 2012:
              *a2 = 11;
              result = L"DxgkUnlock";
              break;
            case 2013:
              *a2 = 11;
              result = L"DxgkRender";
              break;
            case 2014:
              *a2 = 19;
              result = L"DxgkGetRuntimeData";
              break;
            case 2015:
              *a2 = 21;
              result = L"DxgkQueryAdapterInfo";
              break;
            case 2016:
              *a2 = 11;
              result = L"DxgkEscape";
              break;
            case 2017:
              *a2 = 23;
              result = L"DxgkGetDisplayModeList";
              break;
            case 2018:
              *a2 = 19;
              result = L"DxgkSetDisplayMode";
              break;
            case 2019:
              *a2 = 29;
              result = L"DxgkGetMultisampleMethodList";
              break;
            case 2020:
              *a2 = 12;
              result = L"DxgkPresent";
              break;
            case 2021:
              *a2 = 27;
              result = L"DxgkGetSharedPrimaryHandle";
              break;
            case 2022:
              *a2 = 18;
              result = L"DxgkCreateOverlay";
              break;
            case 2023:
              *a2 = 18;
              result = L"DxgkUpdateOverlay";
              break;
            default:
              goto LABEL_716;
          }
        }
      }
    }
    return result;
  }
  if ( a1 <= 6000 )
  {
    if ( a1 == 6000 )
    {
      *a2 = 47;
      return L"DmmInterfaceAcquiredPreferredMonitorSourceMode";
    }
    else
    {
      switch ( a1 )
      {
        case 5001:
          *a2 = 16;
          result = L"DdiCreateDevice";
          break;
        case 5002:
          *a2 = 20;
          result = L"DdiCreateAllocation";
          break;
        case 5003:
          *a2 = 22;
          result = L"DdiDescribeAllocation";
          break;
        case 5004:
          *a2 = 35;
          result = L"DdiGetStandardAllocationDriverData";
          break;
        case 5005:
          *a2 = 21;
          result = L"DdiDestroyAllocation";
          break;
        case 5006:
          *a2 = 25;
          result = L"DdiAcquireSwizzlingRange";
          break;
        case 5007:
          *a2 = 25;
          result = L"DdiReleaseSwizzlingRange";
          break;
        case 5008:
          *a2 = 9;
          result = L"DdiPatch";
          break;
        case 5009:
          *a2 = 15;
          result = L"DdiCommitVidPn";
          break;
        case 5010:
          *a2 = 25;
          result = L"DdiSetVidPnSourceAddress";
          break;
        case 5011:
          *a2 = 28;
          result = L"DdiSetVidPnSourceVisibility";
          break;
        case 5012:
          result = L"DdiUpdateActiveVidPnPresentPath";
          goto LABEL_723;
        case 5013:
          *a2 = 17;
          result = L"DdiSubmitCommand";
          break;
        case 5014:
          *a2 = 18;
          result = L"DdiPreemptCommand";
          break;
        case 5015:
          *a2 = 21;
          result = L"DdiQueryCurrentFence";
          break;
        case 5016:
          *a2 = 21;
          result = L"DdiBuildPagingBuffer";
          break;
        case 5017:
          *a2 = 14;
          result = L"DdiSetPalette";
          break;
        case 5018:
          *a2 = 19;
          result = L"DdiSetPointerShape";
          break;
        case 5019:
          *a2 = 22;
          result = L"DdiSetPointerPosition";
          break;
        case 5020:
          *a2 = 20;
          result = L"DdiResetFromTimeout";
          break;
        case 5021:
          *a2 = 22;
          result = L"DdiRestartFromTimeout";
          break;
        case 5022:
          *a2 = 10;
          result = L"DdiEscape";
          break;
        case 5023:
          *a2 = 18;
          result = L"DdiCollectDbgInfo";
          break;
        case 5024:
          *a2 = 28;
          result = L"DdiRecommendFunctionalVidPn";
          break;
        case 5025:
          *a2 = 20;
          result = L"DdiIsSupportedVidPn";
          break;
        case 5026:
          *a2 = 27;
          result = L"DdiEnumVidPnCofuncModality";
          break;
        case 5027:
          *a2 = 17;
          result = L"DdiDestroyDevice";
          break;
        case 5028:
          *a2 = 18;
          result = L"DdiOpenAllocation";
          break;
        case 5029:
          *a2 = 19;
          result = L"DdiCloseAllocation";
          break;
        case 5030:
          *a2 = 10;
          result = L"DdiRender";
          break;
        case 5031:
          *a2 = 11;
          result = L"DdiPresent";
          break;
        case 5032:
          *a2 = 17;
          result = L"DdiCreateOverlay";
          break;
        case 5033:
          *a2 = 17;
          result = L"DdiUpdateOverlay";
          break;
        case 5034:
          *a2 = 15;
          result = L"DdiFlipOverlay";
          break;
        case 5035:
          *a2 = 18;
          result = L"DdiDestroyOverlay";
          break;
        case 5036:
          *a2 = 15;
          result = L"DdiGetScanLine";
          break;
        case 5037:
          *a2 = 25;
          result = L"DdiRecommendMonitorModes";
          break;
        case 5038:
          *a2 = 20;
          result = L"DdiControlInterrupt";
          break;
        case 5039:
          *a2 = 15;
          result = L"DdiStopCapture";
          break;
        case 5040:
          *a2 = 26;
          result = L"DdiRecommendVidPnTopology";
          break;
        case 5041:
          *a2 = 17;
          result = L"DdiCreateContext";
          break;
        case 5042:
          *a2 = 18;
          result = L"DdiDestroyContext";
          break;
        case 5043:
          *a2 = 13;
          result = L"DdiNotifyDpc";
          break;
        case 5044:
          *a2 = 33;
          result = L"DdiSetDisplayPrivateDriverFormat";
          break;
        case 5045:
          *a2 = 12;
          result = L"DdiRenderKm";
          break;
        case 5046:
          *a2 = 17;
          result = L"DdiAddTargetMode";
          break;
        case 5047:
          *a2 = 26;
          result = L"DdiQueryVidPnHWCapability";
          break;
        case 5048:
          *a2 = 22;
          result = L"DdiPresentDisplayOnly";
          break;
        case 5049:
          *a2 = 29;
          result = L"DdiQueryDependentEngineGroup";
          break;
        case 5050:
          *a2 = 21;
          result = L"DdiQueryEngineStatus";
          break;
        case 5051:
          *a2 = 15;
          result = L"DdiResetEngine";
          break;
        case 5052:
          *a2 = 17;
          result = L"DdiCancelCommand";
          break;
        case 5053:
          *a2 = 19;
          result = L"DdiGetNodeMetadata";
          break;
        case 5054:
          *a2 = 21;
          result = L"DdiControlInterrupt2";
          break;
        case 5055:
          *a2 = 33;
          result = L"DdiCheckMultiPlaneOverlaySupport";
          break;
        case 5056:
          *a2 = 21;
          result = L"DdiCalibrateGpuClock";
          break;
        case 5057:
          *a2 = 23;
          result = L"DdiFormatHistoryBuffer";
          break;
        case 5058:
          *a2 = 24;
          result = L"DdiGetRootPageTableSize";
          break;
        case 5059:
          *a2 = 20;
          result = L"DdiSetRootPageTable";
          break;
        case 5060:
          *a2 = 28;
          result = L"DdiInitPagingProcessVaSpace";
          break;
        case 5061:
          *a2 = 22;
          result = L"DdiMapCpuHostAperture";
          break;
        case 5062:
          *a2 = 24;
          result = L"DdiUnmapCpuHostAperture";
          break;
        case 5063:
          *a2 = 24;
          result = L"DdiSubmitCommandVirtual";
          break;
        case 5064:
          *a2 = 17;
          result = L"DdiCreateProcess";
          break;
        case 5065:
          *a2 = 18;
          result = L"DdiDestroyProcess";
          break;
        case 5066:
          *a2 = 13;
          result = L"DdiRenderGdi";
          break;
        case 5067:
          *a2 = 34;
          result = L"DdiCheckMultiPlaneOverlaySupport2";
          break;
        case 5068:
          *a2 = 23;
          result = L"DdiSetStablePowerState";
          break;
        case 5069:
          *a2 = 27;
          result = L"DdiSetVideoProtectedRegion";
          break;
        case 5070:
          *a2 = 34;
          result = L"DdiCheckMultiPlaneOverlaySupport3";
          break;
        case 5071:
          *a2 = 23;
          result = L"DdiControlModeBehavior";
          break;
        case 5072:
          *a2 = 25;
          result = L"DdiUpdateMonitorLinkInfo";
          break;
        case 5073:
          *a2 = 36;
          result = L"DdiValidateUpdateAllocationProperty";
          break;
        case 5074:
          *a2 = 35;
          result = L"DdiCreatePeriodicFrameNotification";
          break;
        case 5075:
          *a2 = 36;
          result = L"DdiDestroyPeriodicFrameNotification";
          break;
        case 5076:
          *a2 = 23;
          result = L"DdiSetTimingsFromVidPn";
          break;
        case 5077:
          *a2 = 18;
          result = L"DdiSetTargetGamma";
          break;
        case 5078:
          *a2 = 24;
          result = L"DdiSetTargetContentType";
          break;
        case 5079:
          *a2 = 33;
          result = L"DdiSetTargetAnalogCopyProtection";
          break;
        case 5080:
          result = L"DdiSetTargetAdjustedColorimetry";
          goto LABEL_723;
        case 5081:
          *a2 = 24;
          result = L"DdiDisplayDetectControl";
          break;
        case 5082:
          *a2 = 25;
          result = L"DdiQueryConnectionChange";
          break;
        case 5083:
          *a2 = 24;
          result = L"DdiExchangePreStartInfo";
          break;
        case 5084:
          *a2 = 28;
          result = L"DdiGetMultiPlaneOverlayCaps";
          break;
        case 5085:
          *a2 = 26;
          result = L"DdiGetPostCompositionCaps";
          break;
        case 5086:
          *a2 = 29;
          result = L"DdiReadVirtualFunctionConfig";
          break;
        case 5087:
          *a2 = 30;
          result = L"DdiWriteVirtualFunctionConfig";
          break;
        case 5088:
          *a2 = 35;
          result = L"DdiWriteVirtualFunctionConfigBlock";
          break;
        case 5089:
          *a2 = 34;
          result = L"DdiReadVirtualFunctionConfigBlock";
          break;
        case 5090:
          *a2 = 19;
          result = L"DdiQueryProbedBars";
          break;
        case 5091:
          *a2 = 22;
          result = L"DdiGetVendorAndDevice";
          break;
        case 5092:
          *a2 = 21;
          result = L"DdiGetDeviceLocation";
          break;
        case 5093:
          *a2 = 24;
          result = L"DdiResetVirtualFunction";
          break;
        case 5094:
          result = L"DdiSetVirtualFunctionPowerState";
          goto LABEL_723;
        case 5095:
          *a2 = 21;
          result = L"DdiGetResourceForBar";
          break;
        case 5096:
          *a2 = 28;
          result = L"DdiQueryVirtualFunctionLuid";
          break;
        case 5097:
          *a2 = 23;
          result = L"DdiGetGpuPartitionInfo";
          break;
        case 5098:
          *a2 = 24;
          result = L"DdiGetVirtualGpuProfile";
          break;
        case 5099:
          *a2 = 24;
          result = L"DdiSetGpuPartitionCount";
          break;
        case 5100:
          *a2 = 20;
          result = L"DdiCreateVirtualGpu";
          break;
        case 5101:
          *a2 = 26;
          result = L"DdiSetVirtualGpuResources";
          break;
        case 5102:
          *a2 = 21;
          result = L"DdiDestroyVirtualGpu";
          break;
        case 5103:
          *a2 = 21;
          result = L"DdiGetVirtualGpuInfo";
          break;
        case 5104:
          *a2 = 22;
          result = L"DdiSetVirtualGpuVmBus";
          break;
        case 5105:
          *a2 = 26;
          result = L"DdiVirtualGpuDriverEscape";
          break;
        case 5106:
          *a2 = 28;
          result = L"DdiQueryMitigatedRangeCount";
          break;
        case 5107:
          *a2 = 24;
          result = L"DdiQueryMitigatedRanges";
          break;
        case 5108:
          *a2 = 26;
          result = L"DdiCreateProtectedSession";
          break;
        case 5109:
          *a2 = 27;
          result = L"DdiDestroyProtectedSession";
          break;
        case 5110:
          *a2 = 17;
          result = L"DdiCreateHwQueue";
          break;
        case 5111:
          *a2 = 18;
          result = L"DdiDestroyHwQueue";
          break;
        case 5112:
          *a2 = 26;
          result = L"DdiSubmitCommandToHwQueue";
          break;
        case 5113:
          *a2 = 25;
          result = L"DdiSetVirtualMachineData";
          break;
        case 5114:
          *a2 = 26;
          result = L"DdiSetSchedulingLogBuffer";
          break;
        case 5115:
          *a2 = 22;
          result = L"DdiSetupPriorityBands";
          break;
        case 5116:
          *a2 = 22;
          result = L"DdiNotifyFocusPresent";
          break;
        case 5117:
          *a2 = 34;
          result = L"DdiSetContextSchedulingProperties";
          break;
        case 5118:
          *a2 = 18;
          result = L"DdiSuspendContext";
          break;
        case 5119:
          *a2 = 17;
          result = L"DdiResumeContext";
          break;
        case 5120:
          *a2 = 46;
          result = L"DdiSetVidPnSourceAddressWithMultiPlaneOverlay";
          break;
        case 5121:
          *a2 = 47;
          result = L"DdiSetVidPnSourceAddressWithMultiPlaneOverlay2";
          break;
        case 5122:
          *a2 = 47;
          result = L"DdiSetVidPnSourceAddressWithMultiPlaneOverlay3";
          break;
        case 5123:
          result = L"DdiPostMultiPlaneOverlayPresent";
          goto LABEL_723;
        case 5124:
          *a2 = 27;
          result = L"DdiSetPowerComponentFState";
          break;
        case 5125:
          *a2 = 18;
          result = L"DdiSetPowerPState";
          break;
        case 5126:
          *a2 = 30;
          result = L"DdiPowerRuntimeControlRequest";
          break;
        case 5127:
          *a2 = 31;
          result = L"DdiPowerRuntimeSetDeviceHandle";
          break;
        case 5128:
          *a2 = 31;
          result = L"DdiQueryDiagnosticTypesSupport";
          break;
        case 5129:
          *a2 = 30;
          result = L"DdiControlDiagnosticReporting";
          break;
        case 5130:
          *a2 = 24;
          result = L"DdiBeginExclusiveAccess";
          break;
        case 5131:
          *a2 = 22;
          result = L"DdiEndExclusiveAccess";
          break;
        case 5132:
          *a2 = 17;
          result = L"DdiResetHwEngine";
          break;
        case 5133:
          *a2 = 18;
          result = L"DdiResumeHwEngine";
          break;
        case 5134:
          *a2 = 24;
          result = L"DdiSignalMonitoredFence";
          break;
        case 5135:
          *a2 = 20;
          result = L"DdiPresentToHwQueue";
          break;
        case 5136:
          *a2 = 25;
          result = L"DdiValidateSubmitCommand";
          break;
        case 5137:
          *a2 = 22;
          result = L"DdiGetBackingResource";
          break;
        case 5138:
          *a2 = 21;
          result = L"DdiGetMmioRangeCount";
          break;
        case 5139:
          *a2 = 17;
          result = L"DdiGetMmioRanges";
          break;
        case 5140:
          result = L"DdiSetTrackedWorkloadPowerLevel";
          goto LABEL_723;
        case 5141:
          *a2 = 25;
          result = L"DdiCollectDiagnosticInfo";
          break;
        case 5143:
          *a2 = 21;
          result = L"DdiControlInterrupt3";
          break;
        case 5144:
          *a2 = 11;
          result = L"DdiDsiCaps";
          break;
        case 5145:
          *a2 = 19;
          result = L"DdiDsiTransmission";
          break;
        case 5146:
          *a2 = 12;
          result = L"DdiDsiReset";
          break;
        case 5155:
          *a2 = 31;
          result = L"DdiSetInterruptTargetPresentId";
          break;
        case 5156:
          *a2 = 21;
          result = L"DdiCancelQueuedFlips";
          break;
        case 5160:
          *a2 = 15;
          result = L"DdiCancelFlips";
          break;
        case 5161:
          *a2 = 22;
          result = L"DdiUpdateFlipQueueLog";
          break;
        default:
          goto LABEL_716;
      }
    }
    return result;
  }
  if ( a1 <= 7000 )
  {
    if ( a1 == 7000 )
    {
      *a2 = 38;
      return L"DmmMiniportInterfaceGetNumSourceModes";
    }
    else
    {
      switch ( a1 )
      {
        case 6001:
          *a2 = 37;
          result = L"DmmInterfaceReleaseMonitorSourceMode";
          break;
        case 6002:
          *a2 = 30;
          result = L"DmmInterfaceGetNumSourceModes";
          break;
        case 6003:
          *a2 = 35;
          result = L"DmmInterfaceAcquireFirstSourceMode";
          break;
        case 6004:
          *a2 = 34;
          result = L"DmmInterfaceAcquireNextSourceMode";
          break;
        case 6005:
          *a2 = 36;
          result = L"DmmInterfaceAcquirePinnedSourceMode";
          break;
        case 6006:
          *a2 = 30;
          result = L"DmmInterfaceReleaseSourceMode";
          break;
        case 6007:
          *a2 = 26;
          result = L"DmmInterfacePinSourceMode";
          break;
        case 6008:
          *a2 = 28;
          result = L"DmmInterfaceUnpinSourceMode";
          break;
        case 6009:
          *a2 = 30;
          result = L"DmmInterfaceGetNumTargetModes";
          break;
        case 6010:
          *a2 = 35;
          result = L"DmmInterfaceAcquireFirstTargetMode";
          break;
        case 6011:
          *a2 = 34;
          result = L"DmmInterfaceAcquireNextTargetMode";
          break;
        case 6012:
          *a2 = 36;
          result = L"DmmInterfaceAcquriePinnedTargetMode";
          break;
        case 6013:
          *a2 = 30;
          result = L"DmmInterfaceReleaseTargetMode";
          break;
        case 6014:
          *a2 = 30;
          result = L"DmmInterfaceCompareTargetMode";
          break;
        case 6015:
          *a2 = 26;
          result = L"DmmInterfacePinTargetMode";
          break;
        case 6016:
          *a2 = 28;
          result = L"DmmInterfaceUnpinTargetMode";
          break;
        case 6017:
          *a2 = 43;
          result = L"DmmInterfaceIsTargetModeSupportedByMonitor";
          break;
        case 6018:
          *a2 = 34;
          result = L"DmmInterfaceGetNumPathsFromSource";
          break;
        case 6019:
          *a2 = 38;
          result = L"DmmInterfaceEnumPathTargetsFromSource";
          break;
        case 6020:
          *a2 = 36;
          result = L"DmmInterfaceGetPathSourceFromTarget";
          break;
        case 6021:
          *a2 = 24;
          result = L"DmmInterfaceAcquirePath";
          break;
        case 6022:
          *a2 = 24;
          result = L"DmmInterfaceReleasePath";
          break;
        case 6023:
          *a2 = 20;
          result = L"DmmInterfaceAddPath";
          break;
        case 6024:
          *a2 = 23;
          result = L"DmmInterfaceRemovePath";
          break;
        case 6025:
          *a2 = 27;
          result = L"DmmInterfaceRemoveAllPaths";
          break;
        case 6026:
          *a2 = 23;
          result = L"DmmInterfacePinScaling";
          break;
        case 6027:
          *a2 = 25;
          result = L"DmmInterfaceUnpinScaling";
          break;
        case 6028:
          *a2 = 24;
          result = L"DmmInterfacePinRotation";
          break;
        case 6029:
          *a2 = 26;
          result = L"DmmInterfaceUnpinRotation";
          break;
        case 6030:
          *a2 = 35;
          result = L"DmmInterfaceRecommendVidPnTopology";
          break;
        case 6031:
          *a2 = 37;
          result = L"DmmInterfaceFindFirstAvailableTarget";
          break;
        case 6032:
          *a2 = 36;
          result = L"DmmInterfaceRestoreFromLkgForSource";
          break;
        case 6033:
          *a2 = 24;
          result = L"DmmInterfaceGetTopology";
          break;
        case 6034:
          *a2 = 33;
          result = L"DmmInterfaceAcquireSourceModeSet";
          break;
        case 6035:
          *a2 = 33;
          result = L"DmmInterfaceReleaseSourceModeSet";
          break;
        case 6036:
          *a2 = 33;
          result = L"DmmInterfaceAcquireTargetModeSet";
          break;
        case 6037:
          *a2 = 33;
          result = L"DmmInterfaceReleaseTargetModeSet";
          break;
        case 6038:
          *a2 = 40;
          result = L"DmmInterfaceAcquireMonitorSourceModeSet";
          break;
        case 6039:
          *a2 = 40;
          result = L"DmmInterfaceReleaseMonitorSourceModeSet";
          break;
        case 6040:
          *a2 = 26;
          result = L"DmmInterfaceGetNumSources";
          break;
        case 6041:
          *a2 = 31;
          result = L"DmmInterfaceAcquireFirstSource";
          break;
        case 6042:
          *a2 = 30;
          result = L"DmmInterfaceAcquireNextSource";
          break;
        case 6043:
          *a2 = 26;
          result = L"DmmInterfaceReleaseSource";
          break;
        case 6044:
          *a2 = 26;
          result = L"DmmInterfaceGetNumTargets";
          break;
        case 6045:
          *a2 = 31;
          result = L"DmmInterfaceAcquireFirstTarget";
          break;
        case 6046:
          *a2 = 30;
          result = L"DmmInterfaceAcquireNextTarget";
          break;
        case 6047:
          *a2 = 26;
          result = L"DmmInterfaceReleaseTarget";
          break;
        case 6048:
          *a2 = 29;
          result = L"DmmInterfaceAcquireSourceSet";
          break;
        case 6049:
          *a2 = 29;
          result = L"DmmInterfaceReleaseSourceSet";
          break;
        case 6050:
          *a2 = 29;
          result = L"DmmInterfaceAcquireTargetSet";
          break;
        case 6051:
          *a2 = 29;
          result = L"DmmInterfaceReleaseTargetSet";
          break;
        case 6052:
          *a2 = 24;
          result = L"DmmInterfaceCreateVidPn";
          break;
        case 6053:
          *a2 = 34;
          result = L"DmmInterfaceCreateVidPnFromActive";
          break;
        case 6054:
          *a2 = 28;
          result = L"DmmInterfaceCreateVidPnCopy";
          break;
        case 6055:
          *a2 = 25;
          result = L"DmmInterfaceReleaseVidPn";
          break;
        case 6056:
          *a2 = 41;
          result = L"DmmInterfaceIsUsingDefaultMonitorProfile";
          break;
        case 6057:
          *a2 = 31;
          result = L"DmmInterfaceIsMonitorConnected";
          break;
        case 6058:
          *a2 = 33;
          result = L"DmmInterfaceRemoveCopyProtection";
          break;
        case 6059:
          *a2 = 30;
          result = L"DmmInterfaceGetPathImportance";
          break;
        case 6060:
          *a2 = 24;
          result = L"DmmInterfaceGetNumPaths";
          break;
        case 6061:
          *a2 = 22;
          result = L"DmmInterfaceEnumPaths";
          break;
        default:
          goto LABEL_716;
      }
    }
    return result;
  }
  if ( a1 <= 8000 )
  {
    if ( a1 == 8000 )
    {
      *a2 = 18;
      return L"ProbeAndLockPages";
    }
    else
    {
      switch ( a1 )
      {
        case 7001:
          *a2 = 43;
          result = L"DmmMiniportInterfaceAcquireFirstSourceMode";
          break;
        case 7002:
          *a2 = 42;
          result = L"DmmMiniportInterfaceAcquireNextSourceMode";
          break;
        case 7003:
          *a2 = 44;
          result = L"DmmMiniportInterfaceAcquirePinnedSourceMode";
          break;
        case 7004:
          *a2 = 38;
          result = L"DmmMiniportInterfaceReleaseSourceMode";
          break;
        case 7005:
          *a2 = 40;
          result = L"DmmMiniportInterfaceCreateNewSourceMode";
          break;
        case 7006:
          *a2 = 34;
          result = L"DmmMiniportInterfaceAddSourceMode";
          break;
        case 7007:
          *a2 = 34;
          result = L"DmmMiniportInterfacePinSourceMode";
          break;
        case 7008:
          *a2 = 38;
          result = L"DmmMiniportInterfaceGetNumTargetModes";
          break;
        case 7009:
          *a2 = 43;
          result = L"DmmMiniportInterfaceAcquireFirstTargetMode";
          break;
        case 7010:
          *a2 = 42;
          result = L"DmmMiniportInterfaceAcquireNextTargetMode";
          break;
        case 7011:
          *a2 = 44;
          result = L"DmmMiniportInterfaceAcquirePinnedTargetMode";
          break;
        case 7012:
          *a2 = 38;
          result = L"DmmMiniportInterfaceReleaseTargetMode";
          break;
        case 7013:
          *a2 = 40;
          result = L"DmmMiniportInterfaceCreateNewTargetMode";
          break;
        case 7014:
          *a2 = 34;
          result = L"DmmMiniportInterfaceAddTargetMode";
          break;
        case 7015:
          *a2 = 34;
          result = L"DmmMiniportInterfacePinTargetMode";
          break;
        case 7016:
          *a2 = 45;
          result = L"DmmMiniportInterfaceGetNumMonitorSourceModes";
          break;
        case 7017:
          *a2 = 54;
          result = L"DmmMiniportInterfaceAcquirePreferredMonitorSourceMode";
          break;
        case 7018:
          *a2 = 50;
          result = L"DmmMiniportInterfaceAcquireFirstMonitorSourceMode";
          break;
        case 7019:
          *a2 = 49;
          result = L"DmmMiniportInterfaceAcquireNextMonitorSourceMode";
          break;
        case 7020:
          *a2 = 47;
          result = L"DmmMiniportInterfaceCreateNewMonitorSourceMode";
          break;
        case 7021:
          *a2 = 41;
          result = L"DmmMiniportInterfaceAddMonitorSourceMode";
          break;
        case 7022:
          *a2 = 45;
          result = L"DmmMiniportInterfaceReleaseMonitorSourceMode";
          break;
        case 7023:
          *a2 = 49;
          result = L"DmmMiniportInterfaceGetNumMonitorFrequencyRanges";
          break;
        case 7024:
          *a2 = 54;
          result = L"DmmMiniportInterfaceAcquireFirstMonitorFrequencyRange";
          break;
        case 7025:
          *a2 = 53;
          result = L"DmmMiniportInterfaceAcquireNextMonitorFrequencyRange";
          break;
        case 7026:
          *a2 = 49;
          result = L"DmmMiniportInterfaceReleaseMonitorFrequencyRange";
          break;
        case 7027:
          *a2 = 45;
          result = L"DmmMiniportInterfaceGetNumMonitorDescriptors";
          break;
        case 7028:
          *a2 = 50;
          result = L"DmmMiniportInterfaceAcquireFirstMonitorDescriptor";
          break;
        case 7029:
          *a2 = 49;
          result = L"DmmMiniportInterfaceAcquireNextMonitorDescriptor";
          break;
        case 7030:
          *a2 = 45;
          result = L"DmmMiniportInterfaceReleaseMonitorDescriptor";
          break;
        case 7031:
          result = L"DmmMiniportInterfaceGetNumPaths";
          goto LABEL_723;
        case 7032:
          *a2 = 42;
          result = L"DmmMiniportInterfaceGetNumPathsFromSource";
          break;
        case 7033:
          *a2 = 46;
          result = L"DmmMiniportInterfaceEnumPathTargetsFromSource";
          break;
        case 7034:
          *a2 = 44;
          result = L"DmmMiniportInterfaceGetPathSourceFromTarget";
          break;
        case 7035:
          result = L"DmmMiniportInterfaceAcquirePath";
          goto LABEL_723;
        case 7036:
          *a2 = 37;
          result = L"DmmMiniportInterfaceAcquireFirstPath";
          break;
        case 7037:
          *a2 = 36;
          result = L"DmmMiniportInterfaceAcquireNextPath";
          break;
        case 7038:
          *a2 = 38;
          result = L"DmmMiniportInterfaceUpdatePathSupport";
          break;
        case 7039:
          result = L"DmmMiniportInterfaceReleasePath";
          goto LABEL_723;
        case 7040:
          *a2 = 34;
          result = L"DmmMiniportInterfaceCreateNewPath";
          break;
        case 7041:
          *a2 = 28;
          result = L"DmmMiniportInterfaceAddPath";
          break;
        case 7042:
          result = L"DmmMiniportInterfaceGetTopology";
          goto LABEL_723;
        case 7043:
          *a2 = 41;
          result = L"DmmMiniportInterfaceAcquireSourceModeSet";
          break;
        case 7044:
          *a2 = 41;
          result = L"DmmMiniportInterfaceReleaseSourceModeSet";
          break;
        case 7045:
          *a2 = 43;
          result = L"DmmMiniportInterfaceCreateNewSourceModeSet";
          break;
        case 7046:
          *a2 = 40;
          result = L"DmmMiniportInterfaceAssignSourceModeSet";
          break;
        case 7047:
          *a2 = 43;
          result = L"DmmMiniportInterfaceAssignMultisamplingSet";
          break;
        case 7048:
          *a2 = 41;
          result = L"DmmMiniportInterfaceAcquireTargetModeSet";
          break;
        case 7049:
          *a2 = 41;
          result = L"DmmMiniportInterfaceReleaseTargetModeSet";
          break;
        case 7050:
          *a2 = 43;
          result = L"DmmMiniportInterfaceCreateNewTargetModeSet";
          break;
        case 7051:
          *a2 = 40;
          result = L"DmmMiniportInterfaceAssignTargetModeSet";
          break;
        case 7052:
          *a2 = 48;
          result = L"DmmMiniportInterfaceAcquireMonitorSourceModeSet";
          break;
        case 7053:
          *a2 = 48;
          result = L"DmmMiniportInterfaceReleaseMonitorSourceModeSet";
          break;
        case 7054:
          *a2 = 48;
          result = L"DmmMiniportInterfaceGetMonitorFrequencyRangeSet";
          break;
        case 7055:
          *a2 = 44;
          result = L"DmmMiniportInterfaceGetMonitorDescriptorSet";
          break;
        case 7056:
          *a2 = 40;
          result = L"DmmMiniportInterfaceQueryVidPnInterface";
          break;
        case 7057:
          *a2 = 42;
          result = L"DmmMiniportInterfaceQueryMonitorInterface";
          break;
        case 7058:
          *a2 = 31;
          result = L"DmmMiniportInterfaceRemovePath";
          break;
        case 7059:
          *a2 = 49;
          result = L"DmmMiniportInterfaceGetAdditionalMonitorModesSet";
          break;
        case 7060:
          *a2 = 53;
          result = L"DmmMiniportInterfaceReleaseAdditionalMonitorModesSet";
          break;
        case 7061:
          *a2 = 29;
          result = L"HandleMonitorPnPNotification";
          break;
        default:
          goto LABEL_716;
      }
    }
    return result;
  }
  if ( a1 <= 10005 )
  {
    if ( a1 == 10005 )
    {
      *a2 = 21;
      return L"DdiCreateAllocation2";
    }
    else
    {
      switch ( a1 )
      {
        case 8001:
          *a2 = 12;
          result = L"UnlockPages";
          break;
        case 8002:
          *a2 = 20;
          result = L"MapViewOfAllocation";
          break;
        case 8003:
          *a2 = 22;
          result = L"UnmapViewOfAllocation";
          break;
        case 8004:
          *a2 = 20;
          result = L"ProcessHeapAllocate";
          break;
        case 8005:
          *a2 = 18;
          result = L"ProcessHeapRotate";
          break;
        case 8006:
          *a2 = 20;
          result = L"BootInt10ModeChange";
          break;
        case 8007:
          *a2 = 22;
          result = L"ResumeInt10ModeChange";
          break;
        case 8008:
          *a2 = 21;
          result = L"FlushAllocationCache";
          break;
        case 8009:
          *a2 = 12;
          result = L"NotifyVSync";
          break;
        case 8010:
          *a2 = 26;
          result = L"MakeProcessIdleToFlushTlb";
          break;
        case 8011:
          *a2 = 37;
          result = L"UpdateGpuVirtualAddressSystemCommand";
          break;
        case 8012:
          *a2 = 18;
          result = L"GdiRenderDuringCS";
          break;
        case 8013:
          *a2 = 14;
          result = L"WakeUpAdapter";
          break;
        case 8014:
          *a2 = 16;
          result = L"CsExitInitiated";
          break;
        case 8015:
          *a2 = 20;
          result = L"BlockListProcessing";
          break;
        case 8016:
          *a2 = 22;
          result = L"HoldAdapterLockThread";
          break;
        case 8017:
          *a2 = 23;
          result = L"PowerStateD3transition";
          break;
        default:
          goto LABEL_716;
      }
    }
    return result;
  }
  if ( a1 <= 13104 )
  {
    if ( a1 == 13104 )
    {
      *a2 = 33;
      return L"UmdDriverHandleKernelModeMessage";
    }
    if ( a1 <= 13002 )
    {
      if ( a1 == 13002 )
      {
        *a2 = 25;
        return L"DxgkDdiMiracastIoControl";
      }
      v11 = a1 - 11000;
      if ( !v11 )
      {
        *a2 = 46;
        return L"DxgkOutputDuplDXGDXGIKEYEDMUTEXOpenLocalMutex";
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        *a2 = 49;
        return L"DxgkOutputDuplDXGDXGIKEYEDMUTEXDestroyLocalMutex";
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        *a2 = 33;
        return L"DxgkOutputDuplAccumulateMetadata";
      }
      v14 = v13 - 998;
      if ( !v14 )
      {
        *a2 = 17;
        return L"BLTQUEUE_Present";
      }
      v15 = v14 - 1000;
      if ( !v15 )
      {
        *a2 = 25;
        return L"DxgkDdiMiracastQueryCaps";
      }
      if ( v15 == 1 )
      {
        *a2 = 29;
        return L"DxgkDdiMiracastCreateContext";
      }
      goto LABEL_716;
    }
    v16 = a1 - 13003;
    if ( !v16 )
    {
      *a2 = 30;
      return L"DxgkDdiMiracastDestroyContext";
    }
    v17 = v16 - 47;
    if ( !v17 )
    {
      *a2 = 26;
      return L"DxgkCbSendUserModeMessage";
    }
    v18 = v17 - 50;
    if ( !v18 )
    {
      *a2 = 31;
      return L"UmdDriverCreateMiracastContext";
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
      {
        *a2 = 30;
        return L"UmdDriverStartMiracastSession";
      }
      if ( v20 == 1 )
      {
        *a2 = 29;
        return L"UmdDriverStopMiracastSession";
      }
      goto LABEL_716;
    }
    result = L"UmdDriverDestroyMiracastContext";
    goto LABEL_723;
  }
  if ( a1 <= 14001 )
  {
    if ( a1 == 14001 )
    {
      *a2 = 24;
      return L"VidMmRecalculateBudgets";
    }
    v21 = a1 - 13150;
    if ( !v21 )
    {
      *a2 = 31;
      return L"UmdDriverCbReportSessionStatus";
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      *a2 = 29;
      return L"UmdDriverCbMiracastIoControl";
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      *a2 = 27;
      return L"UmdDriverCbReportStatistic";
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      *a2 = 28;
      return L"UmdDriverCbGetNextChunkData";
    }
    v25 = v24 - 1;
    if ( !v25 )
    {
      *a2 = 44;
      return L"UmdDriverCbRegisterForDataRateNotifications";
    }
    if ( v25 == 846 )
    {
      *a2 = 23;
      return L"VidMmProcessOperations";
    }
    goto LABEL_716;
  }
  v26 = a1 - 15000;
  if ( !v26 )
  {
    result = L"DxgkCbSetProtectedSessionStatus";
LABEL_723:
    *a2 = 32;
    return result;
  }
  v27 = v26 - 1000;
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 != 1 )
          {
LABEL_716:
            *a2 = 9;
            return L"NotFound";
          }
          *a2 = 40;
          return L"DxgkSharedBundleObjectObDeleteProcedure";
        }
        else
        {
          *a2 = 44;
          return L"DxgkSharedProtectedSessionObDeleteProcedure";
        }
      }
      else
      {
        *a2 = 38;
        return L"DxgkSharedSyncObjectObDeleteProcedure";
      }
    }
    else
    {
      *a2 = 44;
      return L"DxgkSharedKeyedMutexObjectObDeleteProcedure";
    }
  }
  else
  {
    *a2 = 38;
    return L"DxgkSharedAllocationObDeleteProcedure";
  }
}
