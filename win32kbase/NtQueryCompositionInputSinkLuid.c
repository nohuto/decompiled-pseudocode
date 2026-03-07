__int64 __fastcall NtQueryCompositionInputSinkLuid(void *a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  NTSTATUS v4; // edi
  _QWORD **v5; // r14
  bool v6; // sf
  __int64 v7; // rbx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 1u, ExCompositionObjectType, 1, &Object, 0LL);
  v5 = (_QWORD **)Object;
  if ( v4 < 0 )
    goto LABEL_17;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v5[1] + 16LL))(v5[1]) == 2 )
      v3 = v5;
    else
      v4 = -1073741788;
  }
  else
  {
    v4 = -1073741816;
  }
  v6 = v4 < 0;
  if ( v4 < 0 )
  {
    ObfDereferenceObject(v5);
LABEL_17:
    v6 = v4 < 0;
  }
  if ( v6 )
    v3 = 0LL;
  if ( v4 >= 0 )
  {
    v7 = v3[2];
    ObfDereferenceObject(v3);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v7;
  }
  return (unsigned int)v4;
}
