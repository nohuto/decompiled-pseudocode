/*
 * XREFs of ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C020C7CC
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020A8B8 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     MonitorSetAppOverride @ 0x1C03C03F8 (MonitorSetAppOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::RecordFeatureUsage(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  NTSTATUS v7; // esi
  wchar_t *v8; // rdx
  __int64 v9; // rcx
  wchar_t *v10; // rax
  __int128 v12; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  int Data; // [rsp+D8h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+E0h] [rbp+7Fh] BYREF

  Data = a3;
  v3 = a2;
  if ( (unsigned int)(a2 - 10) > 1 && *(_BYTE *)(a2 + a1 + 304792) )
    return 0LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v12 = 0LL;
  v5 = 0x7FFFLL;
  v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage";
  while ( *v6 )
  {
    ++v6;
    if ( !--v5 )
      goto LABEL_8;
  }
  *((_QWORD *)&v12 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage";
  LOWORD(v12) = 2 * (0x7FFF - v5);
  WORD1(v12) = v12 + 2;
LABEL_8:
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 704;
  v7 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( !v7 )
  {
    _mm_lfence();
    v8 = off_1C008CB70[v3];
    ValueName = 0LL;
    if ( v8 )
    {
      v9 = 0x7FFFLL;
      v10 = v8;
      while ( *v10 )
      {
        ++v10;
        if ( !--v9 )
          goto LABEL_15;
      }
      ValueName.Buffer = v8;
      ValueName.Length = 2 * (0x7FFF - v9);
      ValueName.MaximumLength = ValueName.Length + 2;
    }
LABEL_15:
    v7 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  if ( v7 >= 0 )
    *(_BYTE *)(v3 + a1 + 304792) = 1;
  return (unsigned int)v7;
}
