/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0102D84
 * Callers:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0102C30 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, struct _UNICODE_STRING *a3, void *a4)
{
  unsigned int v5; // edi
  HANDLE v6; // rsi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+20h] BYREF
  void *m_ptr; // [rsp+80h] [rbp+30h] BYREF
  NTSTATUS (__stdcall *v11)(HANDLE); // [rsp+88h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a4;
  ObjectAttributes.Attributes = 576;
  v5 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
  v6 = KeyHandle;
  if ( this->m_ptr )
  {
    m_ptr = this->m_ptr;
    v11 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v11, &m_ptr);
  }
  this->m_ptr = v6;
  return v5;
}
