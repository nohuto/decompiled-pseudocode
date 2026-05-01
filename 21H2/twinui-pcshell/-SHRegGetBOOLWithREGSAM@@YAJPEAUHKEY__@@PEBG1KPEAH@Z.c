/*
 * XREFs of ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18007AB94
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180030320 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803BE218 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE940 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHRegGetBOOLWithREGSAM(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int *a5)
{
  LSTATUS ValueW; // eax
  unsigned int v6; // ecx
  int v8; // ecx
  bool v9; // zf
  DWORD v10; // [rsp+40h] [rbp-18h] BYREF
  DWORD v11[5]; // [rsp+44h] [rbp-14h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = a4;
  v10 = 0;
  v11[0] = 4;
  ValueW = RegGetValueW(a1, a2, a3, 0x10000012u, &v10, &v12, v11);
  LOWORD(v6) = 13;
  if ( !ValueW )
  {
    if ( v10 == 4 )
    {
      if ( v12 <= 1 )
      {
        v8 = 0;
        v9 = v12 == 1;
LABEL_10:
        LOBYTE(v8) = v9;
        *a5 = v8;
        return 0;
      }
    }
    else if ( v11[0] == 4 && (unsigned __int16)(v12 - 48) <= 1u )
    {
      v8 = 0;
      v9 = (_WORD)v12 == 49;
      goto LABEL_10;
    }
    return (unsigned __int16)v6 | 0x80070000;
  }
  if ( ValueW == 234 )
    ValueW = 13;
  v6 = ValueW;
  if ( ValueW > 0 )
    return (unsigned __int16)v6 | 0x80070000;
  return v6;
}
