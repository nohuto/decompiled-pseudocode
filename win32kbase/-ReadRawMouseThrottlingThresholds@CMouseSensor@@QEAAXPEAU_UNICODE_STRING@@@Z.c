/*
 * XREFs of ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C002E858
 * Callers:
 *     ReadRawMouseThrottlingThresholds @ 0x1C002E220 (ReadRawMouseThrottlingThresholds.c)
 * Callees:
 *     _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1C002E91C (_lambda_39f407e4fe10312c322b3b59a6fe001c_--operator().c)
 */

void __fastcall CMouseSensor::ReadRawMouseThrottlingThresholds(CMouseSensor *this, struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING **v3; // [rsp+30h] [rbp+8h] BYREF
  struct _UNICODE_STRING *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = &v4;
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (char *)this + 1888);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (char *)this + 1912);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (char *)this + 1936);
  lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(&v3, (char *)this + 1960);
  *((_QWORD *)this + 249) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 486) / 0x3E8;
  *((_QWORD *)this + 250) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 492) / 0x3E8;
}
