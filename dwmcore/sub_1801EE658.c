// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1801EE658(CFrameInfo *a1)
{
  char v1; // cf
  char v2; // of
  char v3; // ah
  char v4; // [rsp-7h] [rbp-7h]

  if ( !v2 )
    JUMPOUT(0x1801EE5EALL);
  if ( __OFADD__(v1, v3) | __OFADD__(v4, v1 + v3) )
    JUMPOUT(0x1801EE62ELL);
  CFrameInfo::~CFrameInfo(a1);
}
