__int64 __fastcall VrpRegistryCallback(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  void *v12; // rbp
  __int64 v13; // rcx
  void *v15; // [rsp+20h] [rbp-38h] BYREF
  GUID ActivityId; // [rsp+28h] [rbp-30h] BYREF

  v3 = 0;
  ActivityId = 0LL;
  if ( a2 > 0x33 )
    return v3;
  v15 = 0LL;
  if ( a2 == 8 )
  {
LABEL_21:
    v6 = a3[7];
LABEL_9:
    v7 = 0LL;
    goto LABEL_10;
  }
  if ( a2 == 23 )
  {
LABEL_7:
    v6 = a3[5];
    v7 = a3[4];
    goto LABEL_10;
  }
  if ( a2 != 29 )
  {
    if ( a2 != 28 )
    {
      switch ( a2 )
      {
        case 0u:
        case 0xEu:
        case 0x1Eu:
          v6 = a3[2];
          goto LABEL_9;
        case 1u:
        case 5u:
        case 6u:
        case 7u:
          v6 = a3[6];
          goto LABEL_9;
        case 2u:
        case 4u:
        case 0x22u:
          v6 = a3[3];
          goto LABEL_9;
        case 3u:
        case 0x24u:
        case 0x2Fu:
        case 0x31u:
          v6 = a3[5];
          goto LABEL_9;
        case 9u:
          goto LABEL_21;
        case 0xBu:
        case 0xDu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x18u:
        case 0x19u:
        case 0x1Fu:
        case 0x23u:
        case 0x25u:
        case 0x27u:
        case 0x2Au:
        case 0x2Cu:
        case 0x2Eu:
        case 0x30u:
        case 0x32u:
          goto LABEL_7;
        case 0x1Au:
          break;
        case 0x1Bu:
        case 0x21u:
          goto LABEL_15;
        case 0x20u:
          v6 = *(_QWORD *)(*a3 + 72);
          goto LABEL_9;
        case 0x26u:
        case 0x29u:
        case 0x2Bu:
        case 0x2Du:
          v6 = a3[4];
          goto LABEL_9;
        case 0x28u:
          v6 = a3[1];
          goto LABEL_9;
        default:
          goto LABEL_12;
      }
    }
    v6 = *(_QWORD *)(*a3 + 88);
    goto LABEL_9;
  }
LABEL_15:
  v6 = *(_QWORD *)(*a3 + 40);
  v7 = *(_QWORD *)(*a3 + 32);
LABEL_10:
  if ( v6 )
  {
    v12 = *(void **)(v6 + 40);
    goto LABEL_26;
  }
  if ( v7 )
  {
    v12 = *(void **)(v7 + 8);
LABEL_26:
    EtwActivityIdControl(1u, &ActivityId);
    switch ( a2 )
    {
      case 0x1Du:
        return (unsigned int)VrpPostOpenOrCreate(a3, v12);
      case 0x1Cu:
        return (unsigned int)VrpPreOpenOrCreate((__int64)a3, v12);
      case 0x16u:
        return (unsigned int)VrpPostQueryKey((__int64)a3);
      default:
        if ( a2 != 7 )
        {
          switch ( a2 )
          {
            case 0xEu:
              if ( a3[2] )
                VrpDecommissionKeyContext();
              break;
            case 0x14u:
              v3 = VrpPostEnumerateKey(a3, v12);
              break;
            case 0x1Au:
              return (unsigned int)VrpPreOpenOrCreate((__int64)a3, v12);
            case 0x1Bu:
              return (unsigned int)VrpPostOpenOrCreate(a3, v12);
            case 0x1Eu:
              return (unsigned int)VrpPreFlushKey(v13, v12);
            case 0x20u:
              return (unsigned int)VrpPreLoadKey(a3, v12);
            case 0x22u:
              return (unsigned int)VrpPreUnloadKey(a3, v12);
            case 0x23u:
              return (unsigned int)VrpPostUnloadKey(a3, v12);
            case 0x28u:
              VrpFreeKeyContext((PVOID)a3[1]);
              break;
            case 0x2Fu:
              return (unsigned int)VrpPreQueryKeyName(a3);
            default:
              return v3;
          }
        }
        break;
    }
    return v3;
  }
LABEL_12:
  if ( a2 != 32 )
  {
    if ( ((a2 - 27) & 0xFFFFFFFD) != 0 )
      return v3;
    v9 = *(_QWORD **)(a3[1] + 16);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      return v3;
    while ( 1 )
    {
      v11 = v10[2] - VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
      if ( !v11 )
        v11 = v10[3] - *((_QWORD *)&VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID + 1);
      if ( !v11 )
        break;
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        return v3;
    }
    v12 = (void *)v10[6];
    goto LABEL_26;
  }
  if ( (unsigned int)VRegEnabledInJob(&v15) )
  {
    v12 = v15;
    EtwActivityIdControl(1u, &ActivityId);
    return (unsigned int)VrpPreLoadKey(a3, v12);
  }
  return v3;
}
