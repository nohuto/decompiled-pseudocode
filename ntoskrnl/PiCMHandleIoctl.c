/*
 * XREFs of PiCMHandleIoctl @ 0x1406CF040
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1406CEFD0 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMOpenDeviceInterfaceKey @ 0x14067E994 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMGetDeviceStatus @ 0x1406C3FD8 (PiCMGetDeviceStatus.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406C46EC (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406C6068 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetRegistryProperty @ 0x1406C74A4 (PiCMGetRegistryProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1406C78A0 (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectProperty @ 0x1406CF2B4 (PiCMGetObjectProperty.c)
 *     PiCMOpenDeviceKey @ 0x14076C7C4 (PiCMOpenDeviceKey.c)
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 *     PiCMSetObjectProperty @ 0x14078B060 (PiCMSetObjectProperty.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14078DEB0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 *     PiCMGetObjectList @ 0x140869E8C (PiCMGetObjectList.c)
 *     PiCMOpenObjectKey @ 0x14086B97C (PiCMOpenObjectKey.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140965C20 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140965DBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140966230 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140966320 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x14096656C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096671C (PiCMDeviceAction.c)
 *     PiCMEnumerateSubKeys @ 0x140966A2C (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceDepth @ 0x140966FB0 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x1409670A8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140967714 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1409679A8 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140967BA4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140967D60 (PiCMUnregisterDeviceInterface.c)
 */

__int64 __fastcall PiCMHandleIoctl(
        unsigned __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *P,
        unsigned int a6,
        int a7)
{
  *P = 0;
  if ( a6 <= 0x47083F )
  {
    if ( a6 == 4655167 )
      return PiCMGetDeviceInterfaceAlias(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
    if ( a6 > 0x47081F )
    {
      switch ( a6 )
      {
        case 0x470823u:
          return PiCMGetRelatedDeviceInstance(a1, a2, (__int64)a3, a4, a7, P);
        case 0x470827u:
          return PiCMGetDeviceStatus(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47082Bu:
          return PiCMGetDeviceDepth(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x47082Fu:
          return PiCMSetDeviceProblem(a1, a2, (_DWORD)a3, a4);
        case 0x470833u:
          return PiCMQueryRemove(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470837u:
          return PiCMRegisterDeviceInterface(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x47083Bu:
          return PiCMUnregisterDeviceInterface(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      }
    }
    else
    {
      switch ( a6 )
      {
        case 0x47081Fu:
          return PiCMSetRegistryProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470803u:
          return PiCMGetDeviceIdList(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470807u:
          return PiCMGetDeviceInterfaceList(a1, a2, (__int64)a3, a4, a7, P);
        case 0x47080Bu:
          return PiCMEnumerateSubKeys(a1, a2, (_DWORD)a3, a4);
        case 0x47080Fu:
          return PiCMGetObjectPropertyKeys(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470813u:
          return PiCMGetObjectProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470817u:
          return PiCMSetObjectProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x47081Bu:
          return PiCMGetRegistryProperty(a1, a2, (__int64)a3, a4, a7, P);
      }
    }
    return 3221225659LL;
  }
  if ( a6 <= 0x47085F )
  {
    switch ( a6 )
    {
      case 0x47085Fu:
        return PiCMDeleteDeviceKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x470843u:
        return PiCMValidateDeviceInstance(a1, a2, (__int64)a3, a4, a7, P);
      case 0x470847u:
        return PiCMCreateDevice(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x47084Bu:
        return PiCMDeleteDevice(a1, a2, (int)a3, a4, a7, P);
      case 0x47084Fu:
        return PiCMDeviceAction(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x470853u:
        return PiCMOpenDeviceInterfaceKey(a1, a2, (__int64)a3, a4, a7, P);
      case 0x470857u:
        return PiCMDeleteDeviceInterfaceKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x47085Bu:
        return PiCMOpenDeviceKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
    }
    return 3221225659LL;
  }
  switch ( a6 )
  {
    case 0x470863u:
      return PiCMOpenClassKey(a1, a2, (int)a3, a4, a7, P);
    case 0x470867u:
      return PiCMDeleteClassKey(a1, a2, (int)a3, a4, a7, P);
    case 0x47086Bu:
      return PiCMOpenObjectKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
    case 0x47086Fu:
      return PiCMCreateObject(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
  }
  if ( a6 != 4655219 )
  {
    if ( a6 == 4655223 )
      return PiCMGetObjectList(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
    return 3221225659LL;
  }
  return PiCMDeleteObject(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
}
