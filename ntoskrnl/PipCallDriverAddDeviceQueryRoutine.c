/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1406C40E0 (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402B167C (PnpDiagnosticTraceDeviceOperation.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     PipOpenServiceEnumKeys @ 0x1406C1280 (PipOpenServiceEnumKeys.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     IopReferenceDriverObjectByName @ 0x1406C3670 (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IopCallDriverReinitializationRoutines @ 0x140780438 (IopCallDriverReinitializationRoutines.c)
 *     PnpGetServiceStartType @ 0x14078C7C0 (PnpGetServiceStartType.c)
 *     PnpIsLegacyDriver @ 0x1407976A8 (PnpIsLegacyDriver.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PnpCheckPossibleBootStartDriver @ 0x14084A740 (PnpCheckPossibleBootStartDriver.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     PpInitGetGroupOrderIndex @ 0x140B591EC (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140B6936C (PnpLoadBootFilterDriver.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  char v5; // r15
  const WCHAR *v6; // rbx
  _DWORD *v8; // rsi
  unsigned int v9; // r13d
  char v10; // r12
  HANDLE v11; // r14
  __int16 v12; // r8
  int v13; // ecx
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  _QWORD *Pool2; // rax
  int Driver; // eax
  int v25; // eax
  void *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // [rsp+34h] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  char v37; // [rsp+90h] [rbp+30h]

  v5 = 0;
  v6 = L"\\Driver\\";
  v33 = 0;
  v37 = 0;
  Handle = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( a1 != 1 || a3 <= 2 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v12 = 92;
  v13 = 0;
  while ( DestinationString.Buffer[v13] == v12 )
  {
    ++v6;
    ++v13;
    v12 = *v6;
    if ( !*v6 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
      v5 = 1;
LABEL_9:
      v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
      Handle = v8;
      if ( v8 )
        goto LABEL_26;
      if ( !v5 )
      {
        ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v11, &v33);
        v18 = v33;
        if ( ServiceStartType < 0 )
          v18 = 4;
        if ( a5 != 3 && !PnPBootDriversInitialized )
        {
          PpInitGetGroupOrderIndex(v11);
          v25 = PnpLoadBootFilterDriver(v11, &UnicodeString);
          v15 = v25;
          if ( v25 >= 0 )
          {
            v8 = Handle;
            if ( Handle )
            {
              ObfReferenceObject(Handle);
              goto LABEL_47;
            }
LABEL_81:
            PnpDiagnosticTraceDeviceOperation(
              &KMPnPEvt_DriverLoad_Fail,
              (unsigned __int16 *)(*a4 + 40),
              v15,
              (__int64)&UnicodeString,
              0);
            v30 = *a4;
            if ( (*(_DWORD *)(*a4 + 396) & 0x6000) != 0 )
              goto LABEL_18;
            if ( (int)v15 <= -1073740961 )
            {
              switch ( v15 )
              {
                case 0xC000035F:
                  goto LABEL_103;
                case 0xC000009A:
                  v32 = 3LL;
                  break;
                case 0xC0000160:
                  v32 = 40LL;
                  break;
                case 0xC000019D:
                  goto LABEL_89;
                case 0xC000025E:
                  v32 = 41LL;
                  break;
                case 0xC000026C:
LABEL_89:
                  v31 = v9;
                  v32 = 39LL;
                  goto LABEL_94;
                default:
LABEL_103:
                  v32 = 31LL;
                  break;
              }
              goto LABEL_92;
            }
            if ( v15 == -1073740955 )
            {
              v31 = 0LL;
              v32 = 37LL;
              goto LABEL_94;
            }
            if ( v15 == -1073740949 )
            {
              PipSetDevNodeProblem(v30, 48LL, 3221226347LL);
              PipSetDevNodeFlags(*a4, 0x100000);
              goto LABEL_18;
            }
            if ( v15 != -1073740948 )
            {
              if ( v15 == -1073740914 )
              {
                v32 = 38LL;
              }
              else
              {
                if ( v15 != -1073740760 )
                  goto LABEL_103;
                v32 = 52LL;
              }
LABEL_92:
              v31 = v15;
LABEL_94:
              PipSetDevNodeProblem(v30, v32, v31);
LABEL_18:
              v10 = v37;
              goto LABEL_19;
            }
            PipSetDevNodeFlags(v30, 0x100000);
LABEL_105:
            v15 = 0;
            goto LABEL_18;
          }
          if ( (unsigned int)(v25 + 1073740949) > 1 )
          {
            if ( v18 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11) )
              *(_BYTE *)(*a4 + 688) = 1;
            v8 = Handle;
            goto LABEL_18;
          }
          v8 = Handle;
LABEL_47:
          if ( !v8 )
            goto LABEL_81;
          goto LABEL_26;
        }
        v19 = a4[1];
        if ( v18 > *(_DWORD *)v19 )
        {
          if ( v18 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
            PipSetDevNodeProblem(*a4, 32LL, 0LL);
        }
        else if ( *(_BYTE *)(v19 + 4) )
        {
          Driver = IopLoadDriver(v11);
          v15 = Driver;
          v11 = 0LL;
          v9 = Driver;
          if ( Driver < 0 && Driver != -1073740955 )
          {
            v27 = (unsigned int)(Driver + 1073740961);
            if ( (unsigned int)v27 > 0x2F || (v28 = 0x800000003001LL, !_bittest64(&v28, v27)) )
            {
              if ( v15 != -1073741218 && v15 != -1073741670 && v15 != -1073740760 )
                v15 = -1073741204;
            }
          }
          if ( PnPInitialized )
            IopCallDriverReinitializationRoutines(0LL);
          v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
          if ( !v8 )
          {
            if ( !PnpBootMode )
              goto LABEL_81;
            if ( v15 + 1073740961 <= 0xD )
            {
              v29 = 12353;
              if ( _bittest(&v29, v15 + 1073740961) )
                goto LABEL_81;
            }
            if ( v15 == -1073740760 )
              goto LABEL_81;
            v15 = -1073741204;
            goto LABEL_47;
          }
LABEL_26:
          if ( (v8[4] & 0x10) != 0 )
          {
            if ( (unsigned int)PnpIsLegacyDriver(v8) )
            {
              if ( a5 != 3 )
                goto LABEL_105;
              PipSetDevNodeFlags(*a4, 4096);
              PipSetDevNodeState(*a4, 778);
            }
            else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 771) <= 2 )
            {
              v22 = (__int64 *)((char *)&a4[a5] + v21);
              v15 = 0;
              Pool2 = (_QWORD *)ExAllocatePool2(256LL, v21, 1852141648LL);
              if ( Pool2 )
              {
                *Pool2 = v8;
                v8 = 0LL;
                Pool2[1] = 0LL;
                while ( *v22 )
                  v22 = (_QWORD *)(*v22 + 8LL);
                *v22 = Pool2;
              }
              else
              {
                v15 = -1073741670;
              }
              goto LABEL_18;
            }
          }
        }
        else if ( v18 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11) )
        {
          *(_BYTE *)(*a4 + 688) = 1;
        }
      }
      v15 = -1073741823;
      goto LABEL_18;
    }
  }
  if ( !*(_WORD *)(*a4 + 56) )
  {
    *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
    *(_QWORD *)(*a4 + 64) = ExAllocatePool2(256LL, DestinationString.MaximumLength, 1215327824LL);
    v26 = *(void **)(*a4 + 64);
    if ( !v26 )
    {
      *(_WORD *)(*a4 + 58) = 0;
      v15 = -1073741823;
      *(_WORD *)(*a4 + 56) = 0;
      *(_QWORD *)(*a4 + 64) = 0LL;
      return v15;
    }
    memmove(v26, DestinationString.Buffer, DestinationString.MaximumLength);
  }
  v14 = PipOpenServiceEnumKeys(&DestinationString, 0x20019u, &Handle, 0LL, 0);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 || a5 )
      PipSetDevNodeProblem(*a4, 19LL, (unsigned int)v14);
    else
      v15 = 0;
    v11 = Handle;
  }
  else
  {
    v11 = Handle;
    DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
    v15 = DriverNameFromKeyNode;
    if ( DriverNameFromKeyNode >= 0 )
    {
      v37 = 1;
      goto LABEL_9;
    }
    PipSetDevNodeProblem(*a4, 19LL, (unsigned int)DriverNameFromKeyNode);
  }
LABEL_19:
  if ( v11 )
    ZwClose(v11);
  if ( v10 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    ObfDereferenceObject(v8);
  return v15;
}
