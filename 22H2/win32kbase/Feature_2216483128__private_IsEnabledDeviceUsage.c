/*
 * XREFs of Feature_2216483128__private_IsEnabledDeviceUsage @ 0x1C00C9B10
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0027C60 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     Feature_2216483128__private_IsEnabledFallback @ 0x1C00C9B48 (Feature_2216483128__private_IsEnabledFallback.c)
 */

__int64 Feature_2216483128__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2216483128__private_featureState & 0x10) != 0 )
    return Feature_2216483128__private_featureState & 1;
  else
    return Feature_2216483128__private_IsEnabledFallback((unsigned int)Feature_2216483128__private_featureState, 3LL);
}
