/*
 * XREFs of ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x1804F6810
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1804EA1E4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?IsBackgroundExtensionContract@@YA_NPEBG@Z @ 0x1804F5FE4 (-IsBackgroundExtensionContract@@YA_NPEBG@Z.c)
 *     ?SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z @ 0x1804F60F8 (-SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z.c)
 */

__int64 __fastcall CActivatedEventArgsBase::v_GetActivationKind(
        CActivatedEventArgsBase *this,
        HSTRING a2,
        enum Windows::ApplicationModel::Activation::ActivationKind *a3)
{
  const WCHAR *StringRawBuffer; // rbp
  HSTRING *v6; // r8
  int v7; // r14d
  char v8; // di
  unsigned int v9; // ebx
  HSTRING string; // [rsp+70h] [rbp+18h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  *(_DWORD *)a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = SplitActionAndServiceId(a2, &string, v6);
  if ( v7 >= 0 )
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v8 = 0;
  v9 = 0;
  do
  {
    if ( v9 >= 0x2C )
      break;
    if ( CompareStringOrdinal(StringRawBuffer, -1, (&off_180540FD0)[2 * v9], -1, 0) == 2 )
    {
      v8 = 1;
      *(_DWORD *)a3 = *((_DWORD *)&off_180540FD0 + 4 * v9 + 2);
    }
    ++v9;
  }
  while ( !v8 );
  if ( !v8 && !IsBackgroundExtensionContract(StringRawBuffer) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  WindowsDeleteString(string);
  return (unsigned int)v7;
}
