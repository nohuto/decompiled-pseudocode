void __fastcall CIVDeserializer::Deserialize(CIVDeserializer *this, struct _IV_HID_POINTER_DEVICE_INFO *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  *((_QWORD *)a2 + 51) = *(_QWORD *)this + (*((_QWORD *)a2 + 51) & 0xFFFFFFFFFFFFFFFEuLL);
  v2 = *((_QWORD *)a2 + 53);
  if ( v2 )
    *((_QWORD *)a2 + 53) = *(_QWORD *)this + (v2 & 0xFFFFFFFFFFFFFFFEuLL);
  v3 = *((_QWORD *)a2 + 55);
  if ( v3 )
    *((_QWORD *)a2 + 55) = *(_QWORD *)this + (v3 & 0xFFFFFFFFFFFFFFFEuLL);
  v4 = *((_QWORD *)a2 + 57);
  if ( v4 )
    *((_QWORD *)a2 + 57) = *(_QWORD *)this + (v4 & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = *((_QWORD *)a2 + 59);
  if ( v5 )
    *((_QWORD *)a2 + 59) = *(_QWORD *)this + (v5 & 0xFFFFFFFFFFFFFFFEuLL);
  v6 = *((_QWORD *)a2 + 61);
  if ( v6 )
    *((_QWORD *)a2 + 61) = *(_QWORD *)this + (v6 & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = *((_QWORD *)a2 + 63);
  if ( v7 )
    *((_QWORD *)a2 + 63) = *(_QWORD *)this + (v7 & 0xFFFFFFFFFFFFFFFEuLL);
  v8 = *((_QWORD *)a2 + 116);
  if ( v8 )
    *((_QWORD *)a2 + 116) = *(_QWORD *)this + (v8 & 0xFFFFFFFFFFFFFFFEuLL);
  v9 = *((_QWORD *)a2 + 122);
  if ( v9 )
    *((_QWORD *)a2 + 122) = *(_QWORD *)this + (v9 & 0xFFFFFFFFFFFFFFFEuLL);
  *((_QWORD *)a2 + 133) = *(_QWORD *)this + (*((_QWORD *)a2 + 133) & 0xFFFFFFFFFFFFFFFEuLL);
  v10 = *((_QWORD *)a2 + 138);
  if ( v10 )
    *((_QWORD *)a2 + 138) = *(_QWORD *)this + (v10 & 0xFFFFFFFFFFFFFFFEuLL);
}
